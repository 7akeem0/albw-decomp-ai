// 0x563BFC: r = f563C54(a, q, s); if (r == 0 || r == -0x20) return 0xc8810bef; if (!p) return 0;
//           tmp[2]; v = f3D22CC(tmp, r + 0x20); f10BB00(p, v); return 0;
typedef unsigned int u32;
typedef int s32;

u32 func_00563C54(u32 a, u32 q, u32 s);
u32 func_003D22CC(u32* out, u32 x);
void func_0010BB00(void* p, u32 v);

u32 func_00563BFC(u32 a, void* p, u32 q, u32 s)
{
    s32 r = (s32)func_00563C54(a, q, s);
    if (r == 0 || r == -0x20)
        return 0xc8810befu;
    if (p != 0) {
        u32 tmp[2];
        u32 v = func_003D22CC(tmp, (u32)r + 0x20);
        func_0010BB00(p, v);
    }
    return 0;
}
