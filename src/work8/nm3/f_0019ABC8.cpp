#include "ds2.h"

extern char ro_006EF62C[];
extern char ro_0049828C[];
struct G7124F0c { void* m0; void* m4; };
extern G7124F0c g_7124F0;
extern void func_00100950(void*, void*, int, int);
extern void func_004A1520(void*);

void func_0019ABC8(void* self) {
    void* v = ro_006EF62C;
    *(void**)self = v;
    void* c = g_7124F0.m4;
    if (self == c) {
        g_7124F0.m4 = 0;
        void* p = g_7124F0.m0;
        void* q = (char*)p + 0x10;
        func_00100950(q, ro_0049828C, 0x190, 4);
        g_7124F0.m0 = 0;
    }
    func_004A1520(self);
}
