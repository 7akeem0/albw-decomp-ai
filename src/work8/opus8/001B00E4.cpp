typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x, y, z; void setSub(const Vec3& a, const Vec3& b); Vec3& operator-=(const Vec3& o); void sub(const Vec3& o); };
Vec3& Vec3::operator-=(const Vec3& o) { setSub(*this, o); return *this; }
void Vec3::sub(const Vec3& o) { setSub(*this, o); }
struct Angle { s32 v; Angle(s32 x) : v(x) {} };
struct TypeInfo { const void* vt; };
extern "C" u32 data_00725B44;
extern "C" TypeInfo data_00725B48;
extern "C" const char ro_006F64F4[];
extern "C" int __cxa_guard_acquire(u32*);
extern "C" void __cxa_guard_release(u32*);
struct Actor;
struct ActorVt { int (*checkDerived)(Actor*, const TypeInfo*); };
struct Actor { ActorVt* vt; char pad[0x368 - 4]; Vec3 m368; char pad374[0x3d0 - 0x374]; Vec3 m3d0; };
extern void* data_0070FB60;
extern char* data_00706E20;
Actor* func_0052FBA0(void* mgr, u32 h);
s32 func_00537B38(void* p);
s32 func_0058AB74(void* p);
u32 func_0058E2B8(const Angle& a);
s32 func_0068C690(const Vec3& v);
struct Info { s8 b0; s8 b1; };
struct Msg { char pad[0x28]; u32 m28; Info* m2c; };
struct Self { char pad[0x3e8]; s32 m3e8; char pad3ec[0x910 - 0x3ec]; u8 b910; };

static const TypeInfo* getTI() {
    if (!(data_00725B44 & 1) && __cxa_guard_acquire(&data_00725B44)) {
        { TypeInfo* t = &data_00725B48; t->vt = ro_006F64F4; }
        __cxa_guard_release(&data_00725B44);
    }
    return &data_00725B48;
}
static int isDerived(Actor* a) {
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Actor* dynCast(Actor* a) {
    if (isDerived(a)) return a;
    return 0;
}

extern "C" s32 func_001B00E4(Self* s, Msg* m)
{
    if (s->b910 == 4 && func_0058AB74(s) != 0xe && func_0058AB74(s) != 0xd) return 0;
    if (m->m2c != 0) {
        s8 t = m->m2c->b1;
        if (t == 5) {
            if (func_00537B38(data_0070FB60) == 3) return 0;
        } else if (t == 10) {
            Actor* a = dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, m->m28));
            if (a) {
                Vec3 d = a->m3d0;
                d -= a->m368;
                s32 an = func_0068C690(d); if (func_0058E2B8(Angle(an - s->m3e8)) < 0x40000000) return 0;
            }
        }
    }
    return 1;
}
