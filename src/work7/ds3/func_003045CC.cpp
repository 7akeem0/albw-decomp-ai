#include "ds3.h"
struct S3045 { char pad[0x4bd]; u8 b4BD; char g[0x4c0-0x4be]; char c4c0[0x40]; };
extern "C" void func_00664884(void*, s32);
extern "C" void* data_711F50;
extern "C" void func_00295B6C(void*);
void func_003045CC(S3045* p) {
    if (!p->b4BD) return;
    func_00664884(p->c4c0, 5);
    p->b4BD = 0;
    func_00295B6C(data_711F50);
}
