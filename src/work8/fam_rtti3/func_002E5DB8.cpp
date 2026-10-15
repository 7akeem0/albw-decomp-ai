typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef float f32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_00725B44;
extern "C" TypeInfo data_00725B48;
extern "C" const char ro_006F64F4[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_00725B44 & 1) && __cxa_guard_acquire(&data_00725B44)) {
        { TypeInfo* t = &data_00725B48; t->vt = ro_006F64F4; }
        __cxa_guard_release(&data_00725B44);
    }
    return &data_00725B48;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct Vec3 { f32 x, y, z; };
struct D : Obj { u8 pad[0x3d0 - 4]; Vec3 m3D0; u8 pad1[0x3e8 - 0x3dc]; u32 m3E8; };
struct IdT { u32 m0; s32 m4; };
extern "C" char* data_00706E20;
extern "C" IdT data_0070AA18;
extern "C" Obj** func_005841A8(char* g, s32 id, Obj** begin);
struct Self;
static inline void cp(Vec3* d, const Vec3* s) { *d = *s; }
extern "C" void func_004FD1A8(Self* s, s32 v);
extern "C" void func_00663FA8(void* p, s32 v);
extern "C" void func_004FB0A4(Self* s, f32 v);
extern "C" void func_004FABDC(Self* s, s32 a, s32 b, s32 c);
extern "C" void func_004FB4E0(Self* s, f32 v);
struct Self {
    u8 pad[0x368]; Vec3 m368; u8 pad1[0x3d0 - 0x374]; Vec3 m3D0; u8 pad2[0x3e8 - 0x3dc]; u32 m3E8;
    u8 pad3[0x8bc - 0x3ec]; u8 m8BC[4]; u8 m8C0;
    bool func_002E5DB8(s32 n);
};
bool Self::func_002E5DB8(s32 n)
{
    if (m8C0 == 9) {
        if (n == 0) {
            char* g = data_00706E20;
            s32 id = data_0070AA18.m4;
            Obj* o = *func_005841A8(g, id, *(Obj***)(g + 0x3dbc0));
            if (o) {
                if (!isDerived(o)) o = 0;
                D* d = static_cast<D*>(o);
                if (d) {
                    cp(&m368, &d->m3D0);
                    cp(&m3D0, &d->m3D0);
                    m3E8 = d->m3E8;
                }
            }
            func_004FABDC(this, 0, -1, 0);
            func_004FB4E0(this, 1.0f);
        } else {
            func_004FD1A8(this, 1);
            func_00663FA8(m8BC, 4);
            func_004FB0A4(this, (f32)(n - 1));
        }
    }
    return false;
}
