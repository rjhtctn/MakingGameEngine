#include <DX3D/Graphics/RenderSystem.h>

dx3d::RenderSystem::RenderSystem(const RenderSystemDesc& desc): Base(desc.base)
{
	D3D_FEATURE_LEVEL featureLevel{};
	UINT createDeviceFlags{};
#ifdef _DEBUG
	createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif // _DEBUG


	auto hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, NULL, 0, D3D11_SDK_VERSION,
		&m_d3dDevice, &featureLevel, &m_d3dContext);

	if (FAILED(hr))
	{
		getLogger().log(Logger::LogLevel::Error, "DirectX3D11 Initilization failed.");
		throw std::runtime_error("DirectX3D11 Initilization failed.");
	}
}

dx3d::RenderSystem::~RenderSystem()
{
}