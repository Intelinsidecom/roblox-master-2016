#pragma once

#include <wrl.h>
#include <d3d11_1.h>
#include <dxgi1_3.h>
#include <memory>
#include <vector>

namespace RobloxEngine
{
    // Simple renderer shim that loads existing WP sample shaders and draws a cube
    class RendererShim
    {
    public:
        RendererShim();
        ~RendererShim();

        // Must be called from the render thread after device/swapchain are ready
        void Initialize(ID3D11Device1* device, ID3D11DeviceContext1* context);

        // Called each frame from Engine::RenderOneFrame before Present
        void Render(ID3D11Device1* device, ID3D11DeviceContext1* context, ID3D11RenderTargetView* rtv);

    private:
        void createResources(ID3D11Device1* device);
        static std::vector<unsigned char> readAppxFileSync(const wchar_t* name);

    private:
        bool m_inited;
        Microsoft::WRL::ComPtr<ID3D11VertexShader> m_vs;
        Microsoft::WRL::ComPtr<ID3D11PixelShader>  m_ps;
        Microsoft::WRL::ComPtr<ID3D11InputLayout>  m_layout;
        Microsoft::WRL::ComPtr<ID3D11Buffer>       m_cbPerObject;
        Microsoft::WRL::ComPtr<ID3D11Buffer>       m_vb;
        Microsoft::WRL::ComPtr<ID3D11Buffer>       m_ib;
        UINT m_indexCount;
    };
}
