#include "ds3.h"
struct S3264 { char pad[0x476]; u8 b476; };
extern "C" bool func_0014DDEC(S3264*);
extern "C" void* data_0070FB60;
extern "C" s32 func_00556B94(void*);
bool func_003264D0(S3264* p) {
    bool r = func_0014DDEC(p);
    if (p->b476 == 1) {
        if (func_00556B94(data_0070FB60) == 0) return true;
    }
    return r;
}
