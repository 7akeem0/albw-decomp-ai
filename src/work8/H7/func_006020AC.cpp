#include "h7.h"

extern char bss_0079CAB8[];

struct Obj006020AC {
    char _0[0x154];
    s32 m154;
    char _158[0x15c - 0x158];
    void (*m15c)(s32);
};

void func_006020AC() {
    Obj006020AC* g = (Obj006020AC*)bss_0079CAB8;
    if (g->m15c != 0) g->m15c(0x400);
    g->m154 = (g->m154 + 1) % 0x7fffffff;
}
