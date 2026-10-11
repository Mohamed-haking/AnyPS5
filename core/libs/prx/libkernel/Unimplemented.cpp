#include <cstdint>
#include <cstddef>
#include <cstring>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"
#include "prx/libc/include/HostThreadLocal.hpp"

extern "C" {

int APS5_VABI sceCoredumpWriteUserData() {
    // Coredump writing - not supported on host
    return 0;
}

extern "C" void* __tls_get_addr(void*);

void* APS5_VABI __tls_get_addr_nid_postfix(void* ti) {
    // Forward to host's __tls_get_addr for TLS variable access
    // This is critical for thread-local storage to work
    return __tls_get_addr(ti);
}

APS5_EXPORT("AC1FtjqMCL0", sceKernelUnknown03);
int APS5_VABI sceKernelUnknown03(void) {
    // Unknown kernel function - return success
    return 0;
}

APS5_EXPORT("0iEKNAvT600", sceKernelUnknown04);
int APS5_VABI sceKernelUnknown04(void) {
    return 0;
}

APS5_EXPORT("2cELEBPdYQ0", sceKernelUnknown05);
int APS5_VABI sceKernelUnknown05(void) {
    return 0;
}

APS5_EXPORT("5xYxiOtOccA", sceKernelUnknown06);
int APS5_VABI sceKernelUnknown06(void) {
    return 0;
}

APS5_EXPORT("6W+shIH315Q", sceKernelUnknown07);
int APS5_VABI sceKernelUnknown07(void) {
    return 0;
}

APS5_EXPORT("7ilObq815O4", sceKernelUnknown08);
int APS5_VABI sceKernelUnknown08(void) {
    return 0;
}

APS5_EXPORT("7iq7Hfs8HBk", sceKernelUnknown09);
int APS5_VABI sceKernelUnknown09(void) {
    return 0;
}

APS5_EXPORT("AMJZhpC+siY", sceKernelUnknown10);
int APS5_VABI sceKernelUnknown10(void) {
    return 0;
}

APS5_EXPORT("E9XkHowt+dY", sceKernelUnknown11);
int APS5_VABI sceKernelUnknown11(void) {
    return 0;
}

APS5_EXPORT("GADjreszOgM", sceKernelUnknown12);
int APS5_VABI sceKernelUnknown12(void) {
    return 0;
}

APS5_EXPORT("Giyg2xGrXDU", sceKernelUnknown13);
int APS5_VABI sceKernelUnknown13(void) {
    return 0;
}

APS5_EXPORT("KC3y21wrqzc", sceKernelUnknown14);
int APS5_VABI sceKernelUnknown14(void) {
    return 0;
}

APS5_EXPORT("Qb8wS4GZUsw", sceKernelUnknown15);
int APS5_VABI sceKernelUnknown15(void) {
    return 0;
}

APS5_EXPORT("aAQZSjb2fho", sceKernelUnknown16);
int APS5_VABI sceKernelUnknown16(void) {
    return 0;
}

APS5_EXPORT("pnz21I6VjDs", sceKernelUnknown17);
int APS5_VABI sceKernelUnknown17(void) {
    return 0;
}

APS5_EXPORT("qk043QPsrZU", sceKernelUnknown18);
int APS5_VABI sceKernelUnknown18(void) {
    return 0;
}

APS5_EXPORT("uDGXwUKqi8s", sceKernelUnknown19);
int APS5_VABI sceKernelUnknown19(void) {
    return 0;
}

}