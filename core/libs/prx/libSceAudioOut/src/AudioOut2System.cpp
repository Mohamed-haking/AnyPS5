#include <cstdint>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

static constexpr int USER_ID_SYSTEM = 0xFF;
static constexpr std::uint32_t MIN_SUPPORTED_3D_LATENCY = 1;
static constexpr std::uint32_t MAX_SUPPORTED_3D_LATENCY = 2;

extern "C" {

int APS5_VABI sceAudioOut2Initialize(void) {
    return 0;
}

int APS5_VABI sceAudioOut2Set3DLatency(int userId, std::uint32_t latency) {
    (void)userId;
    (void)latency;
    // 3D audio latency - no-op on host
    return 0;
}

int APS5_VABI sceAudioOut2GetSystemState(AudioOut2SystemState* state) {
    if (!state) return static_cast<int>(0x80260502);
    state->loudness = 0.0f;
    return 0;
}

int APS5_VABI sceAudioOut2SetSystemDebugState(const AudioOut2SystemDebugStateParam* param) {
    (void)param;
    // System debug state - no-op on host
    return 0;
}

int APS5_VABI sceAudioOut2UserGetSupportedAttributes(void) {
    // User supported attributes - return 0
    return 0;
}

int APS5_VABI sceAudioOut2EnableChat(void) {
    // Chat enable - no-op on host
    return 0;
}

}