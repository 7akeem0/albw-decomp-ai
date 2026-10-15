// 0x48AD94: stores (int)a,(int)b,(int)c,(int)d at this+0xd4; t=0; func_6003D8(0x208,&t); r=func_563A5C(this+0xd4,t); t=r; func_601378((r-t)&~3)
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct IVec4_80 {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
};

struct Obj80 {
    u8 pad0[0xd4];
    IVec4_80 m0d4;
};

void func_006003D8(u32 n, u32* out);
s32 func_00563A5C(IVec4_80* v, s32 k);
void func_00601378(u32 n);

void func_0048AD94(Obj80* self, float a, float b, float c, float d)
{
    IVec4_80 v;
    v.w = (s32)d;
    v.x = (s32)a;
    v.y = (s32)b;
    v.z = (s32)c;
    self->m0d4 = v;
    u32 t;
    func_006003D8(0x208, &t);
    s32 k = (s32)t;
    s32 r = func_00563A5C(&self->m0d4, k);
    t = (u32)r;
    func_00601378(((u32)r - (u32)k) & ~3u);
}
