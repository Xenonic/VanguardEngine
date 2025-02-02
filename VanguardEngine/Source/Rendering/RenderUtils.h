// Copyright (c) 2019-2022 Andrew Depke

#pragma once

#include <Rendering/Base.h>
#include <Utility/Singleton.h>
#include <Rendering/PipelineState.h>
#include <Rendering/ResourceHandle.h>
#include <Rendering/DescriptorHeap.h>

class RenderDevice;
class CommandList;

class RenderUtils : public Singleton<RenderUtils>
{
public:
	TextureHandle blueNoise;

private:
	RenderDevice* device = nullptr;
	PipelineState clearUAVState;

public:
	void Initialize(RenderDevice* inDevice);
	void Destroy();

	void ClearUAV(CommandList& list, BufferHandle buffer, uint32_t bufferHandle, const DescriptorHandle& nonVisibleDescriptor);
};