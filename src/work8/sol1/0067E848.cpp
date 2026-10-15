
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef float f32;

struct Obj {
    u8 pad0[0xe];
    u16 mE;      
    u8 pad10[0x18 - 0x10];
    f32 m18;     
    f32 m1c;     
    void* m20;   
};

struct Rec { u32 key; u32 val; };

u32 firstKey(const Rec* p){u32 r=p->key;r<<=20;r>>=20;return r;}
Rec* target(Obj* o, f32 t) {
    f32 d = o->m18;
    Rec* tab = (Rec*)o->m20;
    u32 idx = (u32)(t / d);
    u32 k0 = firstKey(tab);
    if (k0 > idx) return tab;
    s32 off = (s32)o->mE * 8 - 8;
    Rec* p = (Rec*)((char*)tab + off);
    if (idx >= (p->key & 0xfff)) return p;
    u32 k = (u32)(o->m1c * (f32)(o->mE - 1) * t);
    p = (Rec*)((char*)tab + k * 8);
    if (idx < (p->key & 0xfff)) {
        do { p = (Rec*)((char*)p - 8); } while ((p->key & 0xfff) > idx);
        return p;
    }
    do { p = (Rec*)((char*)p + 8); } while ((p->key & 0xfff) <= idx);
    return (Rec*)((char*)p - 8);
}
