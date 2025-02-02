// Copyright (c) 2019-2022 Andrew Depke

#pragma once

#include <cstdint>

namespace Input
{
	void Initialize(void* window);

	void EnableDPIAwareness();

	bool ProcessWindowMessage(void* window, uint32_t message, int64_t wParam, uint64_t lParam);
	void UpdateInputDevices(void* window);

	void SubmitFrameTime(uint32_t timeUs);
};