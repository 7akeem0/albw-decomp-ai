#include "ds6.h"

struct V4A0AA8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
};
struct G4A0AA8 { char _pad[0x118]; void* m118; };
extern G4A0AA8 bss_0079DBA0;

struct Obj4A0AA8 {
    char _pad[0x24];
    V4A0AA8* m24;
    u8 m28;
};

void* func_0048AB38();

void func_004A0AA8(Obj4A0AA8* self) {
    if (self->m28 != 0 && self->m24 != 0) {
        if (bss_0079DBA0.m118 == 0) {
            void* x = func_0048AB38();
            if (x) bss_0079DBA0.m118 = x;
        }
        self->m24->v5();
    }
}
