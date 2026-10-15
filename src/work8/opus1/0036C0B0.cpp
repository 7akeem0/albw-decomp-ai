
typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Vec3 { f32 x, y, z; void setAdd(const Vec3& a, const Vec3& b); };

struct Elem44 { f32 f[7]; Vec3 v; s16 m28; s16 pad2a; };
extern Elem44 data_00708AA0[];

struct ActorP { char pad[0x3d0]; Vec3 pos; };

struct Ctl0C {
    virtual void f0(void* a, Vec3* b);
    virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8();
    virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12();
    virtual bool f13(Vec3* a, void* b, s8 c);
    char pad[0x10];
    u32 m14;
    void* m18;
    void setM14(u32 v){ m14 = v; }
    void setM18(void* v){ m18 = v; }
};

struct Obj36C0;
extern void func_0036B76C(Obj36C0* p);

struct Game { char pad[0x3dbbc]; u32 list; };
extern Game* data_00706E20;
struct B70A518 { char pad[0xa1]; u8 flag; };
extern B70A518* data_0070A518;
extern void func_0052FD7C(u32* list, void (*fn)(void*, u32), u32 a);
extern void func_001206B8(void*, u32);

struct Obj36C0 {
    char pad4[4];
    ActorP* m4;
    char pad8[4];
    Ctl0C* mC;
    char pad10[4];
    u32 m14;
    char pad18[4];
    u32 m1c;
    s32 m20;
    char pad24[8];
    Ctl0C* m2C;
    char pad30[0xc4];
    u8 mF4;
    char padF5[3];
    u8 mF8;
    char padF9[1];
    s8 mFA;
};

bool func_0036C0B0(Obj36C0* p) {
    p->m1c = p->m14; __schedule_barrier();
    Elem44 e = data_00708AA0[(u8)p->m14];
    if (p->m20 >= 0)
        e.m28 = (s16)p->m20;
    Vec3 out;
    Vec3* o = &out;
    o->setAdd(p->m4->pos, e.v);
    p->mC->m14 = 0;
    p->mC->setM18((char*)p + 0xb4);
    if (p->mF4 == 3 && p->m2C)
        p->m2C->f0(&e, &out);
    if (p->mC->f13(&out, &e, p->mFA)) {
        func_0036B76C(p);
        u8 f = p->mF8;
        p->mFA = 0;
        if (f) {
            Game* g = data_00706E20; func_0052FD7C(&g->list, func_001206B8, 0);
            if (data_0070A518)
                data_0070A518->flag = 1;
        }
        return true;
    }
    return false;
}
