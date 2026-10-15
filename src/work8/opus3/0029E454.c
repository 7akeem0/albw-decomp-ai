typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct Obj { char pad0[0x14]; void* m14; void* m18; void* m1c; void* m20; } Obj;
extern void* data_0070B898;
extern void func_00503CA4(void* p, s32 a, s32 b);
extern void* func_0010BAB4(u32 size, s32 tag);
extern void* func_00445280(void* p);
extern void* func_004387A4(void* p);
extern void* func_0043898C(void* p);
extern void* func_00473AD4(void* p);
extern void func_004B9958(void* p, s32 v);
extern void func_001B6C2C(void* p);
extern void func_001B6A48(void* p);

void FUN_0029e454(Obj* o, s32 k)
{
    void* p;
    func_00503CA4(data_0070B898, 6, 0);
    if (k == 0) {
        p = func_0010BAB4(0x4c0, k);
        if (p) p = func_00445280(p);
        o->m14 = p;
        func_004B9958(p, 2);
        p = func_0010BAB4(0x78, k);
        if (p) p = func_004387A4(p);
        o->m18 = p;
        func_004B9958(p, 2);
        if (o->m18) {
            func_001B6C2C(o->m18);
            func_001B6A48(o->m18);
        }
    } else if (k == 1) {
        p = func_0010BAB4(0xe4, k);
        if (p) p = func_0043898C(p);
        o->m1c = p;
        func_004B9958(p, 2);
        p = func_0010BAB4(0xb0, k);
        if (p) p = func_00473AD4(p);
        o->m20 = p;
    }
}
