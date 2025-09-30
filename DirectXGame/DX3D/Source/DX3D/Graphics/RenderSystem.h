#pragma once
#include <DX3D/Core/Base.h>
#include "d3d11.h"
#include "wrl.h"
#include <DX3D/Core/Common.h>

namespace dx3d
{
	class RenderSystem : public Base
	{
	public:
		explicit RenderSystem(const RenderSystemDesc& desc);
		virtual ~RenderSystem() override;
	private:
		Microsoft::WRL::ComPtr<ID3D11Device> m_d3dDevice{};
		Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_d3dContext{};
	};
}