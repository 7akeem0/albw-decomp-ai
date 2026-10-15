#include "ds3.h"
struct E2D43 { u32 v; E2D43(); };
extern "C" const char ro_006DD698[];
struct S2D43 {
    const char* name;
    u32 zero;
    u32 arg;
    E2D43 arr[3];
    u8 flag;
    S2D43(u32 a);
};
S2D43::S2D43(u32 a) : name(ro_006DD698), zero(0), arg(a), flag(0) {}
