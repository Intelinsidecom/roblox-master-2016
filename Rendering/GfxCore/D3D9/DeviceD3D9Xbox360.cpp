#include "DeviceD3D9.h"

#include "GeometryD3D9.h"
#include "ShaderD3D9.h"
#include "TextureD3D9.h"
#include "FramebufferD3D9.h"

#include "rbx/rbxTime.h"

#include <d3d9.h>
#include <xbox.h>

#if defined(RBX_PLATFORM_XBOX360)

LOGGROUP(Graphics)

FASTFLAGVARIABLE(DebugGraphicsD3D9ForceSWVP, false)
FASTFLAGVARIABLE(DebugGraphicsD3D9ForceFFP, false)

namespace RBX
{
namespace Graphics
{

static D3DPRESENT_PARAMETERS getPresentParameters(void* windowHandle, unsigned int width, unsigned int height)
{
	D3DPRESENT_PARAMETERS params = {};

	params.BackBufferWidth = width;
	params.BackBufferHeight = height;
	params.BackBufferFormat = D3DFMT_X8R8G8B8;
	params.BackBufferCount = 1;

	params.SwapEffect = D3DSWAPEFFECT_DISCARD;
	params.hDeviceWindow = NULL;
	params.Windowed = false;
	params.EnableAutoDepthStencil = true;
	params.AutoDepthStencilFormat = D3DFMT_D24S8;

	params.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;

    return params;
}

static std::pair<unsigned int, unsigned int> getFramebufferSize(void* windowHandle)
{
	XVIDEO_MODE mode = {};
	XGetVideoMode(&mode);

    return std::make_pair(mode.dwDisplayWidth, mode.dwDisplayHeight);
}

static IDirect3DDevice9* createDevice(IDirect3D9* d3d, unsigned int adapter, void* windowHandle)
{
	D3DCAPS9 caps9 = {};
	d3d->GetDeviceCaps(adapter, D3DDEVTYPE_HAL, &caps9);

	std::pair<unsigned int, unsigned int> dimensions = getFramebufferSize(windowHandle);
	D3DPRESENT_PARAMETERS params = getPresentParameters(windowHandle, dimensions.first, dimensions.second);
    unsigned int behaviorFlags = D3DCREATE_HARDWARE_VERTEXPROCESSING;

	IDirect3DDevice9* device;

	HRESULT hr = d3d->CreateDevice(adapter, D3DDEVTYPE_HAL, NULL, behaviorFlags, &params, &device);

	if (SUCCEEDED(hr))
	{
		FASTLOG(FLog::Graphics, "D3D9 device created");
		return device;
	}

	FASTLOG1(FLog::Graphics, "D3D9 device creation failed: %x", hr);
	return NULL;
}

static bool isTextureFormatSupported(IDirect3D9* d3d9, unsigned int adapter, D3DFORMAT format)
{
	return d3d9->CheckDeviceFormat(adapter, D3DDEVTYPE_HAL, D3DFMT_X8R8G8B8, 0, D3DRTYPE_TEXTURE, format) == D3D_OK;
}

static unsigned int getMaxSamplesSupported(IDirect3D9* d3d9, unsigned int adapter)
{
    unsigned int result = 1;

    for (unsigned int mode = 2; mode <= 16; ++mode)
        if (SUCCEEDED(d3d9->CheckDeviceMultiSampleType(adapter, D3DDEVTYPE_HAL, D3DFMT_A8R8G8B8, true, static_cast<D3DMULTISAMPLE_TYPE>(mode), NULL)))
            result = mode;

    return result;
}

static DeviceCapsD3D9 createDeviceCaps(IDirect3D9* d3d9, unsigned int adapter, IDirect3DDevice9* device9)
{
    D3DCAPS9 caps9 = {};
    device9->GetDeviceCaps(&caps9);

    IDirect3DSurface9* depthBuffer;
    D3DFORMAT depthFormat = D3DFMT_UNKNOWN;

    if (SUCCEEDED(device9->GetDepthStencilSurface(&depthBuffer)) && depthBuffer)
    {
        D3DSURFACE_DESC desc;

        depthBuffer->GetDesc(&desc);
        depthBuffer->Release();

        depthFormat = desc.Format;
    }

    DeviceCapsD3D9 caps;

    caps.supportsFramebuffer = true;
    caps.supportsShaders = !FFlag::DebugGraphicsD3D9ForceFFP && caps9.VertexShaderVersion >= D3DVS_VERSION(2, 0) && caps9.PixelShaderVersion >= D3DPS_VERSION(2, 0);
    caps.supportsFFP = !caps.supportsShaders;
    caps.supportsStencil = (depthFormat == D3DFMT_D24S8 || depthFormat == D3DFMT_D24FS8) && (caps9.StencilCaps & D3DSTENCILCAPS_TWOSIDED);
    caps.supportsIndex32 = caps9.MaxVertexIndex > 65535;

    caps.supportsTextureDXT = isTextureFormatSupported(d3d9, adapter, D3DFMT_DXT1) && isTextureFormatSupported(d3d9, adapter, D3DFMT_DXT3) && isTextureFormatSupported(d3d9, adapter, D3DFMT_DXT5);
    caps.supportsTexturePVR = false;
    caps.supportsTextureETC1 = false;
    caps.supportsTextureHalfFloat = isTextureFormatSupported(d3d9, adapter, D3DFMT_A16B16G16R16F);
    caps.supportsTexture3D = (caps9.TextureCaps & D3DPTEXTURECAPS_VOLUMEMAP) != 0;
    caps.supportsTextureNPOT = !(caps9.TextureCaps & D3DPTEXTURECAPS_POW2) && !(caps9.TextureCaps & D3DPTEXTURECAPS_NONPOW2CONDITIONAL);

	caps.supportsTexturePartialMipChain = true;

    caps.maxDrawBuffers = caps9.NumSimultaneousRTs;
    caps.maxSamples = getMaxSamplesSupported(d3d9, adapter);
    caps.maxTextureSize = std::min(caps9.MaxTextureWidth, caps9.MaxTextureHeight);
	caps.maxTextureUnits = 16;

    caps.colorOrderBGR = true;
    caps.needsHalfPixelOffset = true;
    caps.requiresRenderTargetFlipping = false;

    caps.retina = false;

    D3DADAPTER_IDENTIFIER9 ai9;
    if (SUCCEEDED(d3d9->GetAdapterIdentifier(adapter, 0, &ai9)))
    {
        switch (ai9.VendorId)
        {
        case 0x10DE:
            caps.vendor = DeviceCapsD3D9::Vendor_NVidia;
            break;
        case 0x1002:
            caps.vendor = DeviceCapsD3D9::Vendor_AMD;
            break;
        case 0x163C:
        case 0x8086:
        case 0x8087:
            caps.vendor = DeviceCapsD3D9::Vendor_Intel;
            break;
        default:
            caps.vendor = DeviceCapsD3D9::Vendor_Unknown;
        }
    }

    return caps;
}

static IDirect3D9* createDirect3D()
{
	return Direct3DCreate9(D3D_SDK_VERSION);
}
 
QueryD3D9::QueryD3D9(Device* device, unsigned int type)
	: Resource(device)
    , type(type)
    , object(NULL)
{
	QueryD3D9::onDeviceRestored();
}

QueryD3D9::~QueryD3D9()
{
	QueryD3D9::onDeviceLost();
}

void QueryD3D9::onDeviceLost()
{
    if (object)
	{
        object->Release();
        object = NULL;
	}
}

void QueryD3D9::onDeviceRestored()
{
	IDirect3DDevice9* device9 = static_cast<DeviceD3D9*>(device)->getDevice9();

	HRESULT hr = device9->CreateQuery(static_cast<D3DQUERYTYPE>(type), &object);

    if (FAILED(hr))
	{
        FASTLOG2(FLog::Graphics, "Error creating query with type %d: %x", type, hr);
        object = NULL;
	}
}

DeviceD3D9::DeviceD3D9(void* windowHandle)
    : windowHandle(windowHandle)
	, d3d9(NULL)
    , device9(NULL)
    , deviceLost(false)
	, frameEventQueryIssued(false)
	, frameTimeQueryIssued(false)
	, gpuTime(0)
	, globalDataSize(0)
    , featureLvlStr("")
{
    // before anything else lets get Feature Lvl based using DX11. On some machines it is slow to get DX11 device when DX9 device exists
    getFeatureLevelDX11(featureLvlStr);

    d3d9 = createDirect3D();

    if (!d3d9)
		throw std::runtime_error("Unable to create D3D interface");

	unsigned int adapter = D3DADAPTER_DEFAULT;

	D3DADAPTER_IDENTIFIER9 ai9;
	if (SUCCEEDED(d3d9->GetAdapterIdentifier(adapter, 0, &ai9)))
	{
		FASTLOGS(FLog::Graphics, "D3D9 GPU: %s", ai9.Description);
		FASTLOG2(FLog::Graphics, "D3D9 GPU: Vendor %04x Device %04x", ai9.VendorId, ai9.DeviceId);
		FASTLOGS(FLog::Graphics, "D3D9 Driver: %s", RBX::format("%s %d.%d.%d.%d", ai9.Driver, ai9.DriverVersion.HighPart >> 16, ai9.DriverVersion.HighPart & 0xffff, ai9.DriverVersion.LowPart >> 16, ai9.DriverVersion.LowPart & 0xffff));
	}

	device9 = createDevice(d3d9, adapter, windowHandle);
    if (!device9)
	{
		d3d9->Release();

		throw std::runtime_error("Unable to create D3D device");
	}

	caps = createDeviceCaps(d3d9, adapter, device9);

	caps.dumpToFLog(FLog::Graphics);

	if (caps.supportsFFP)
        immediateContext.reset(new DeviceContextFFPD3D9(this));
	else
        immediateContext.reset(new DeviceContextD3D9(this));

	createMainFramebuffer();

	frameEventQuery.reset(new QueryD3D9(this, D3DQUERYTYPE_EVENT));
}

DeviceD3D9::~DeviceD3D9()
{
    immediateContext.reset();
	mainFramebuffer.reset();

	frameEventQuery.reset();

    device9->Release();
	d3d9->Release();
}

void DeviceD3D9::getFeatureLevelDX11(std::string& strOut)
{
	strOut = "D3D9";
}

std::string DeviceD3D9::getFeatureLevel()
{
    if (featureLvlStr.empty() && device9)
    {
        // if we weren't able to get feature level from DX11, we have to decode it from caps
        D3DCAPS9 caps9 = {};
        device9->GetDeviceCaps(&caps9);
        
        // playing detective and trying to retrieve DX version from supported features
        bool separateAlphaBlend =  (caps9.PrimitiveMiscCaps & D3DPMISCCAPS_SEPARATEALPHABLEND) != 0;      
        bool occlusionQueriesSupported = SUCCEEDED(device9->CreateQuery(D3DQUERYTYPE_OCCLUSION, NULL)); 
        bool instancingSupported = (caps9.VertexShaderVersion >= D3DVS_VERSION(3,0)) &&               // Instancing needs VS 3.0 support
                                   (caps9.DevCaps2 & D3DDEVCAPS2_STREAMOFFSET);                       // and also needs support of vertex buffer offset. (Check comes from DX SDK instancing sample)
        bool suportsShaders =      caps9.VertexShaderVersion >= D3DVS_VERSION(2, 0) && caps9.PixelShaderVersion >= D3DPS_VERSION(2, 0);

        featureLvlStr = "D3D_";
        if (caps9.NumSimultaneousRTs >=4 && instancingSupported) // only 9.3 supports more than 1 RT
            featureLvlStr += "9.3";
        else if (separateAlphaBlend && occlusionQueriesSupported)
            featureLvlStr += "9.2";
        else if (suportsShaders)
            featureLvlStr += "9.1";
        else
            featureLvlStr += "9.0";
    }

    return featureLvlStr;
}

bool DeviceD3D9::validate()
{
	std::pair<unsigned int, unsigned int> dimensions = getFramebufferSize(windowHandle);

    // Reset device if window size changed
	if (!deviceLost && mainFramebuffer && (dimensions.first != mainFramebuffer->getWidth() || dimensions.second != mainFramebuffer->getHeight()))
    {
		handleDeviceLost();

		bool result = resetDevice(dimensions.first, dimensions.second);

        if (result)
        {
            RBXASSERT(dimensions.first == mainFramebuffer->getWidth() && dimensions.second == mainFramebuffer->getHeight());
        }
        else
        {
            deviceLost = true;

            FASTLOG(FLog::Graphics, "ERROR: Device reset failed; will try again next frame");
            return false;
        }
    }

    // Handle device lost/reset
	return validateDevice(dimensions.first, dimensions.second);
}

DeviceContext* DeviceD3D9::beginFrame()
{
	std::pair<unsigned int, unsigned int> dimensions = getFramebufferSize(windowHandle);

    // Don't render anything if there is no main framebuffer or device is lost
	if (!mainFramebuffer || deviceLost)
        return NULL;

    // Don't render anything if window size changed; wait for validate
	if (dimensions.first != mainFramebuffer->getWidth() || dimensions.second != mainFramebuffer->getHeight())
        return NULL;

	device9->BeginScene();

	immediateContext->bindFramebuffer(mainFramebuffer.get());
	immediateContext->clearStates();

	return immediateContext.get();
}

void DeviceD3D9::endFrame()
{
    RBXASSERT(!deviceLost);

    device9->EndScene();

    // Wait for last frame to finish on GPU
	if (frameEventQuery->getObject() && frameEventQueryIssued)
	{
        Timer<Time::Precise> timer;

		while (frameEventQuery->getObject()->GetData(NULL, 0, D3DGETDATA_FLUSH) == S_FALSE)
		{
            // If query wait takes too long, stop using it
			if (timer.delta().seconds() > 5)
			{
				FASTLOG(FLog::Graphics, "D3D Frame query timed out, resetting");

				frameEventQuery->onDeviceLost();

                break;
			}
		}

		frameEventQueryIssued = false;
	}

    // Submit new query for frame wait
	if (frameEventQuery->getObject() && !frameEventQueryIssued)
	{
		frameEventQuery->getObject()->Issue(D3DISSUE_END);

		frameEventQueryIssued = true;
	}

	if (frameCallback)
		frameCallback(device9);

	HRESULT hr = device9->Present(NULL, NULL, NULL, NULL);

    if (FAILED(hr))
	{
        FASTLOG1(FLog::Graphics, "ERROR: Present failed with error %x", hr);
	}
}

Framebuffer* DeviceD3D9::getMainFramebuffer()
{
    return mainFramebuffer.get();
}

DeviceVR* DeviceD3D9::getVR()
{
	return NULL;
}

void DeviceD3D9::setVR(bool enabled)
{
}

void DeviceD3D9::defineGlobalConstants(size_t dataSize, const std::vector<ShaderGlobalConstant>& constants)
{
	RBXASSERT(globalConstants.empty());
	RBXASSERT(!constants.empty());

    // Since constants are directly set to register values, we impose additional restrictions on constant data
    // The struct should be an integer number of float4 registers, and every constant has to be aligned to float4 boundary
    RBXASSERT(dataSize % 16 == 0);
    globalDataSize = dataSize;

    for (size_t i = 0; i < constants.size(); ++i)
	{
		const ShaderGlobalConstant& c = constants[i];

		RBXASSERT(c.offset % 16 == 0);
		RBXASSERT(globalConstants.count(c.name) == 0);

		globalConstants.insert(std::make_pair(c.name, c));
	}

	immediateContext->defineGlobalConstants(globalDataSize);
}

std::string DeviceD3D9::getShadingLanguage()
{
    return "hlsl";
}

std::string DeviceD3D9::createShaderSource(const std::string& path, const std::string& defines, boost::function<std::string (const std::string&)> fileCallback)
{
	return ShaderProgramD3D9::createShaderSource(path, defines, fileCallback);
}

std::vector<char> DeviceD3D9::createShaderBytecode(const std::string& source, const std::string& target, const std::string& entrypoint)
{
	return ShaderProgramD3D9::createShaderBytecode(source, target, entrypoint);
}

shared_ptr<VertexShader> DeviceD3D9::createVertexShader(const std::vector<char>& bytecode)
{
	if (!caps.supportsShaders)
        throw RBX::runtime_error("No shader support");

    return shared_ptr<VertexShader>(new VertexShaderD3D9(this, bytecode));
}

shared_ptr<FragmentShader> DeviceD3D9::createFragmentShader(const std::vector<char>& bytecode)
{
	if (!caps.supportsShaders)
        throw RBX::runtime_error("No shader support");

    return shared_ptr<FragmentShader>(new FragmentShaderD3D9(this, bytecode));
}

shared_ptr<ShaderProgram> DeviceD3D9::createShaderProgram(const shared_ptr<VertexShader>& vertexShader, const shared_ptr<FragmentShader>& fragmentShader)
{
	if (!caps.supportsShaders)
        throw RBX::runtime_error("No shader support");

    return shared_ptr<ShaderProgram>(new ShaderProgramD3D9(this, vertexShader, fragmentShader));
}

shared_ptr<ShaderProgram> DeviceD3D9::createShaderProgramFFP()
{
	if (!caps.supportsFFP)
        throw RBX::runtime_error("No FFP support");

	return shared_ptr<ShaderProgram>(new ShaderProgramFFPD3D9(this));
}

shared_ptr<VertexBuffer> DeviceD3D9::createVertexBuffer(size_t elementSize, size_t elementCount, VertexBuffer::Usage usage)
{
	return shared_ptr<VertexBuffer>(new VertexBufferD3D9(this, elementSize, elementCount, usage));
}

shared_ptr<IndexBuffer> DeviceD3D9::createIndexBuffer(size_t elementSize, size_t elementCount, VertexBuffer::Usage usage)
{
	return shared_ptr<IndexBuffer>(new IndexBufferD3D9(this, elementSize, elementCount, usage));
}

shared_ptr<VertexLayout> DeviceD3D9::createVertexLayout(const std::vector<VertexLayout::Element>& elements)
{
    return shared_ptr<VertexLayout>(new VertexLayoutD3D9(this, elements));
}

shared_ptr<Texture> DeviceD3D9::createTexture(Texture::Type type, Texture::Format format, unsigned int width, unsigned int height, unsigned int depth, unsigned int mipLevels, Texture::Usage usage)
{
    return shared_ptr<Texture>(new TextureD3D9(this, type, format, width, height, depth, mipLevels, usage));
}

shared_ptr<Renderbuffer> DeviceD3D9::createRenderbuffer(Texture::Format format, unsigned int width, unsigned int height, unsigned int samples)
{
    return shared_ptr<Renderbuffer>(new RenderbufferD3D9(this, format, width, height, samples));
}

shared_ptr<Geometry> DeviceD3D9::createGeometryImpl(const shared_ptr<VertexLayout>& layout, const std::vector<shared_ptr<VertexBuffer> >& vertexBuffers, const shared_ptr<IndexBuffer>& indexBuffer, unsigned int baseVertexIndex)
{
    return shared_ptr<Geometry>(new GeometryD3D9(this, layout, vertexBuffers, indexBuffer, baseVertexIndex));
}

shared_ptr<Framebuffer> DeviceD3D9::createFramebufferImpl(const std::vector<shared_ptr<Renderbuffer> >& color, const shared_ptr<Renderbuffer>& depth)
{
	return shared_ptr<Framebuffer>(new FramebufferD3D9(this, color, depth));
}

DeviceStats DeviceD3D9::getStatistics() const
{
	DeviceStats result = {};

	result.gpuFrameTime = gpuTime;

    return result;
}

void DeviceD3D9::createMainFramebuffer()
{
	RBXASSERT(!mainFramebuffer);

	IDirect3DSurface9* backBuffer = NULL;
	device9->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &backBuffer);

	IDirect3DSurface9* depthBuffer = NULL;
	device9->GetDepthStencilSurface(&depthBuffer);

	mainFramebuffer.reset(new FramebufferD3D9(this, backBuffer, depthBuffer));
}

bool DeviceD3D9::validateDevice(unsigned int width, unsigned int height)
{
    // Xbox 360 devices are never "lost" in the PC sense; the device is always valid.
    return true;
}

bool DeviceD3D9::resetDevice(unsigned int width, unsigned int height)
{
	D3DPRESENT_PARAMETERS params = getPresentParameters(windowHandle, width, height);

	HRESULT hr = device9->Reset(&params);

    if (FAILED(hr))
	{
		FASTLOG3(FLog::Graphics, "Failed to reset device (framebuffer %dx%d): %x", width, height, hr);

        return false;
	}
	else
	{
		FASTLOG2(FLog::Graphics, "Device restored (framebuffer %dx%d), recreating resources", width, height);

        // Restore all resources
        fireDeviceRestored();
        createMainFramebuffer();

        return true;
	}
}

void DeviceD3D9::handleDeviceLost()
{
	mainFramebuffer.reset();
	fireDeviceLost();

	if (frameCallback)
		frameCallback(NULL);
}

}

}

#endif
