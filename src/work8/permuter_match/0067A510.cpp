typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef float f32;

struct Obj {
    u8 pad0[0xe];
    u16 mE;      
    f32 m10;     
    f32 m14;     
    f32 m18;     
    f32 m1c;     
    void* m20;   
};

struct Hdr {
u32 k : 12;
u32 v : 20;
};

f32 target(Obj* o, f32 t) {
    f32 d = o->m18;
    u32* tab;
    u32* p = tab = (u32*)o->m20;
    const u32 w0 = tab[0];
    u32 idx = (u32)(t / d);

    { const u32 k0 = (u32)((w0 << 20) >> 20);
    if (k0 > idx) goto end; }
    {
        u16 cnt = o->mE;
        s32 off = (s32)cnt * 4 - 4;
        p = (u32*)((char*)tab + off);
        if (idx >= (p[0] & 0xfff)) goto end;
        u32 k = (u32)(o->m1c * (f32)(cnt - 1) * t);
        p = tab + k;
        if ((p[0] & 0xfff) > idx) {
            do {
p -= 1;
}
while ((p[0] & 0xfff) > idx);
        } else {
            do {
p += 1;
}
while (!((p[0] & 0xfff) > idx));
            p -= 1;
        }
    }
end:
    f32 b = o->m14;
    u32 v = p[0] >> 12;
    f32 m = o->m10;
    f32 fv = (f32)v;
    return b + fv * m;
}
