typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_0072626C;
extern "C" TypeInfo data_00726270;
extern "C" const char ro_006F605C[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_0072626C & 1) && __cxa_guard_acquire(&data_0072626C)) {
        { TypeInfo* t = &data_00726270; t->vt = ro_006F605C; }
        __cxa_guard_release(&data_0072626C);
    }
    return &data_00726270;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
struct A : Obj {};
struct P484 { u8 pad[0x44]; u8 m44; void set44(u8 v) { m44 = v; } };
extern "C" char* data_00706E20;
extern "C" Obj* func_0052FBA0(void* mgr, u32 h);
struct Self;
extern "C" void func_00150A84(Self* self, const sead::SafeString& s, s32 v);
extern "C" void func_001E4090(Self* self, s32 v);
extern "C" void func_001E43F8(Self* self, float v);
extern "C" void func_00324964(Self* self);
struct Self {
    u8 pad[0x2e]; u16 m2E; u8 pad1[0x2cc - 0x30]; u32 m2CC; u8 pad2[0x484 - 0x2d0]; P484* m484; u8 pad3[0x494 - 0x488]; u8 m494;
    void func_001BFC14();
    void impl(A* a, u8 z);
};
inline void Self::impl(A* a, u8 z)
{
    if (a) func_00150A84(this, sead::SafeString("SE_DoorChurch_CLOSE"), 0);
    m494 = z;
    func_001E4090(this, 1);
    func_001E43F8(this, 1.0f);
    if (m2E == 0) func_00324964(this);
    m484->set44(1);
}
void Self::func_001BFC14()
{
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, m2CC);
    if (!isDerived(o)) o = 0;
    A* a = static_cast<A*>(o);
    impl(a, 0);
}
