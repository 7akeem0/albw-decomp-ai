typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
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
struct Vec3 { float x, y, z; };
struct A : Obj {};
struct M {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual bool check(A* a);
};
struct M;
struct G { u8 pad[0x44]; M* m44; };
struct S { u32 m0; float m4; u8 pad[0x14 - 8]; u32 m14; };
extern "C" char* data_00706E20;
extern "C" G* data_0070B728;
extern "C" Obj* func_0052FBA0(void* mgr, u32 h);
extern "C" void func_00520F54(A* a, Vec3* out, void* arg);
extern "C" bool func_001E44C4(S* s, Vec3* out, void* arg)
{
    if (s->m4 != 1.0f && s->m14 != 0) {
        Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, s->m14);
        if (!isDerived(o)) o = 0;
        A* a = static_cast<A*>(o);
        if (!a) {
            s->m14 = 0;
        } else {
            M* m = data_0070B728->m44;
            if (m == 0 || m->check(a)) {
                func_00520F54(a, out, arg);
                return true;
            }
        }
    }
    out->x = 0.0f; out->y = 0.0f; out->z = 0.0f;
    return false;
}
