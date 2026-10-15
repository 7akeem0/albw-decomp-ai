#include "ds6.h"

struct S53999C { char _pad[0x60]; };

extern void* data_00711F50;
void func_0010A464(void* p);
void func_00587FA0(void* a, s32 h, void* s);
void func_0025B66C(void* s, f32 v);
void func_0025B84C(void* s);

void func_0053999C(void* self, s32 h) {
    if (h == -1) return;
    S53999C s;
    func_0010A464(&s);
    func_00587FA0(data_00711F50, h, &s);
    func_0025B66C(&s, 0.4f);
    func_0025B84C(&s);
}
