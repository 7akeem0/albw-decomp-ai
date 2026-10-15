#include "ds3.h"
struct Arg3169 { char pad[0x28]; u32 m28; };
struct S3169F0 { char pad[0x50]; u32 m50; char pad2[0x474-0x54]; void* m474; };
extern "C" void func_00664D94(void*, int);
extern "C" int func_003248F8(void*, Arg3169*);
int func_003169F0(S3169F0* self, Arg3169* arg) {
    if (self->m474 == 0) return 0;
    u32 v = arg->m28;
    u32 w = self->m50;
    if (v == w) return 0;
    func_00664D94((char*)self + 0x40c, 1);
    return func_003248F8(self->m474, arg);
}
