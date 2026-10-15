#include "ds2.h"

extern u16 ro_006A0F34[];
extern void* g_70B728;
extern void func_004CDF40(void*, u16, int);
extern void func_004CF478(void*, u32, u32);
extern void func_00151148(void*, u32);
__attribute__((weak)) extern void func_0065C310(void*, int);

struct Obj1CD0F8 {
    char pad0[0x40c];
    void* m40C;
    void* m410;
    char pad414[0x4f9 - 0x414];
    u8 m4F9;
};

void func_001CD0F8(Obj1CD0F8* self) {
    u16 h = ro_006A0F34[self->m4F9];
    func_004CDF40(g_70B728, h, 1);
    func_004CF478(self->m40C, 0, 0);
    func_00151148(self->m410, 0);
    func_0065C310((char*)self + 0x4d4, 6);
}
