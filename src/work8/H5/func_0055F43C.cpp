typedef unsigned int u32;
typedef void** VT;

typedef u32 (*VF)(void* self, u32 a);

extern "C" u32 func_0055F43C(void* o) {
    VT vt = *(VT*)o;
    if (((VF)vt[0x104 / 4])(o, 3) != 0) {
        return 0;
    }
    vt = *(VT*)o;
    if (((VF)vt[0x104 / 4])(o, 4) == 0) {
        return 1;
    }
    return 0;
}
