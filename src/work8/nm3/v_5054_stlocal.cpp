#include "ds6.h"
extern char ro_006F8164[];
struct G505420 { char _pad[8]; void* m8; void* mC; };
extern G505420 data_0070BC20;
struct Obj505420 { void* m0; };
void* func_004A1520(void* self);
void func_0049116C(void* p);
void func_004929B8(void* p);
void* func_00505420(Obj505420* self) {
    void* v = ro_006F8164;
    self->m0 = v;
    void* c = data_0070BC20.mC;
    if ((void*)self == c) {
        data_0070BC20.mC = 0;
        void* p = data_0070BC20.m8;
        func_0049116C((char*)p + 0xfc);
        func_004929B8((char*)p + 0x64);
        func_004929B8((char*)p + 0x18);
        data_0070BC20.m8 = 0;
    }
    return func_004A1520(self);
}
