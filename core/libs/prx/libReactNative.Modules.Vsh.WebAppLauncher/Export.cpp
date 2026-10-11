#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI ErrorDialogClose(void) {
    // Error dialog close - not implemented on host
    return 0;
}

int APS5_VABI ErrorDialogOpen(const void* param) {
    (void)param;
    // Error dialog open - not implemented on host
    return 0;
}

int APS5_VABI ShareGetCurrentStatus(uint32_t feature_flag, ShareCurrentStatus* status) {
    (void)feature_flag;
    (void)status;
    // Share get current status - not implemented on host
    return 0;
}

int APS5_VABI ShareInitialize(size_t heap_size, int thread_priority, uint64_t affinity_mask) {
    (void)heap_size;
    (void)thread_priority;
    (void)affinity_mask;
    // Share initialize - not implemented on host
    return 0;
}

int APS5_VABI ShareTerminate(void) {
    // Share terminate - not implemented on host
    return 0;
}

int APS5_VABI SystemServiceParamGetInt(int param_id, int* value) {
    (void)param_id;
    (void)value;
    // System service param get int - not implemented on host
    return 0;
}

int APS5_VABI SystemServiceParamGetString(int param_id, char* buf, size_t buf_size) {
    (void)param_id;
    (void)buf;
    (void)buf_size;
    // System service param get string - not implemented on host
    return 0;
}

}