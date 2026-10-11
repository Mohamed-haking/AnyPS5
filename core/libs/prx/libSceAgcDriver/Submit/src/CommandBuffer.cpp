#include "prx/libSceAgcDriver/Submit/include/CommandBuffer.hpp"

#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceAgcDriverSubmitCommandBuffer(void* queue_context, const Packet* packet) {
    (void)queue_context;
    (void)packet;
    // Command buffer submission is handled by the AgcDriver Execution layer
    // This API is a legacy/compatibility layer - the real submission happens via AgcDriver::Submit
    return 0;
}

int APS5_VABI sceAgcDriverSubmitMultiCommandBuffers(void* queue_context, uint32_t* const* command_buffers, const uint32_t* sizes_in_dwords, uint32_t count) {
    (void)queue_context;
    (void)command_buffers;
    (void)sizes_in_dwords;
    (void)count;
    // Multi command buffer submission - not needed as AgcDriver handles submission
    return 0;
}

}