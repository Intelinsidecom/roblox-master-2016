#include "pch.h"
#include "RendererShim.h"
#include "../Common/DirectXHelper.h"

using Microsoft::WRL::ComPtr;

namespace RobloxEngine
{
    struct VSConstants
    {
        float model[16];
        float view[16];
        float proj[16];
    };

    static void identity4(float* m)
    {
        for (int i = 0; i < 16; ++i) m[i] = 0.0f;
        m[0] = m[5] = m[10] = m[15] = 1.0f;
    }

    RendererShim::RendererShim()
        : m_inited(false)
        , m_indexCount(0)
    {
    }

    RendererShim::~RendererShim() = default;

    void RendererShim::Initialize(ID3D11Device1* device, ID3D11DeviceContext1* context)
    {
        if (m_inited) return;
        createResources(device);
        m_inited = true;
    }

    void RendererShim::Render(ID3D11Device1* device, ID3D11DeviceContext1* context, ID3D11RenderTargetView* /*rtv*/)
    {
        if (!m_inited) return;
        // Set pipeline state
        UINT stride = sizeof(float) * 6; // pos(3) + color(3)
        UINT offset = 0;
        ID3D11Buffer* vb = m_vb.Get();
        context->IASetVertexBuffers(0, 1, &vb, &stride, &offset);
        context->IASetIndexBuffer(m_ib.Get(), DXGI_FORMAT_R16_UINT, 0);
        context->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        context->IASetInputLayout(m_layout.Get());

        context->VSSetShader(m_vs.Get(), nullptr, 0);
        context->PSSetShader(m_ps.Get(), nullptr, 0);

        // Simple identity constants
        VSConstants cb = {};
        identity4(cb.model); identity4(cb.view); identity4(cb.proj);
        context->UpdateSubresource(m_cbPerObject.Get(), 0, nullptr, &cb, 0, 0);
        ID3D11Buffer* cbs[] = { m_cbPerObject.Get() };
        context->VSSetConstantBuffers(0, 1, cbs);

        context->DrawIndexed(m_indexCount, 0, 0);
    }

    void RendererShim::createResources(ID3D11Device1* device)
    {
        // Load existing sample shaders compiled by the WP project
        // Use WP helper to read from package; block during initialization
        auto vsBytes = DX::ReadDataAsync(L"SampleVertexShader.cso").get();
        auto psBytes = DX::ReadDataAsync(L"SamplePixelShader.cso").get();

        DX::ThrowIfFailed(device->CreateVertexShader(vsBytes.data(), vsBytes.size(), nullptr, &m_vs));
        DX::ThrowIfFailed(device->CreatePixelShader(psBytes.data(), psBytes.size(), nullptr, &m_ps));

        static const D3D11_INPUT_ELEMENT_DESC vertexDesc[] =
        {
            { "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0,  D3D11_INPUT_PER_VERTEX_DATA, 0 },
            { "COLOR",    0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0 },
        };

        DX::ThrowIfFailed(device->CreateInputLayout(vertexDesc, _countof(vertexDesc), vsBytes.data(), vsBytes.size(), &m_layout));

        // Create constant buffer
        D3D11_BUFFER_DESC cbd = {};
        cbd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
        cbd.ByteWidth = sizeof(VSConstants);
        cbd.Usage = D3D11_USAGE_DEFAULT;
        DX::ThrowIfFailed(device->CreateBuffer(&cbd, nullptr, &m_cbPerObject));

        // Simple colored cube geometry (positions + colors)
        const float verts[] = {
            // pos                // color
            -0.5f,-0.5f,-0.5f,    0,0,0,
            -0.5f,-0.5f, 0.5f,    0,0,1,
            -0.5f, 0.5f,-0.5f,    0,1,0,
            -0.5f, 0.5f, 0.5f,    0,1,1,
             0.5f,-0.5f,-0.5f,    1,0,0,
             0.5f,-0.5f, 0.5f,    1,0,1,
             0.5f, 0.5f,-0.5f,    1,1,0,
             0.5f, 0.5f, 0.5f,    1,1,1,
        };
        D3D11_BUFFER_DESC vbd = {};
        vbd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
        vbd.ByteWidth = sizeof(verts);
        D3D11_SUBRESOURCE_DATA vinit = {}; vinit.pSysMem = verts;
        DX::ThrowIfFailed(device->CreateBuffer(&vbd, &vinit, &m_vb));

        const unsigned short idx[] = {
            0,2,1, 1,2,3,
            4,5,6, 5,7,6,
            0,1,5, 0,5,4,
            2,6,7, 2,7,3,
            0,4,6, 0,6,2,
            1,3,7, 1,7,5,
        };
        m_indexCount = (UINT)_countof(idx);
        D3D11_BUFFER_DESC ibd = {};
        ibd.BindFlags = D3D11_BIND_INDEX_BUFFER;
        ibd.ByteWidth = sizeof(idx);
        D3D11_SUBRESOURCE_DATA iinit = {}; iinit.pSysMem = idx;
        DX::ThrowIfFailed(device->CreateBuffer(&ibd, &iinit, &m_ib));
    }
}
