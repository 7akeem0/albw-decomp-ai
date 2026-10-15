typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef float f32;

struct Float67{f32 value;Float67(f32 n):value(n){} inline operator f32()const{return value;}};
struct Obj {
    u8 pad0[0xe];
    u16 mE;      
    f32 m10;     
    f32 m14;     
    f32 m18;     
    f32 m1c;     
    void* m20;   
};

f32 target(Obj* o, f32 t) {
    f32 d = o->m18;
    u8* tab;
    u32 idx = (u32)(t / d);
    u8* p = tab = (u8*)o->m20;
    if (tab[0] > idx) goto end;
    {
        u16 cnt = o->mE;
        s32 off = (s32)cnt * 4 - 4;
        p = tab + off;
        if (p[0] <= idx) goto end;
        u32 k = (u32)(o->m1c * (f32)(cnt - 1) * t);
        p = tab + k * 4;
        if (p[0] > idx) {
            do { p -= 4; } while (idx < p[0]);
        } else {
            do { p += 4; } while (!(p[0] > idx));
            p -= 4;
        }
    }
end:
    const Float67 m = o->m10; 
    f32 b = o->m14;
    u32 v = p[1] + ((p[2] & 0xf) << 8);
    const f32 fv = (f32)v;
    return b+fv*m;
}
