typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef float f32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_00727788;
extern "C" TypeInfo data_0072778C;
extern "C" const char ro_006F60BC[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_00727788 & 1) && __cxa_guard_acquire(&data_00727788)) {
        { TypeInfo* t = &data_0072778C; t->vt = ro_006F60BC; }
        __cxa_guard_release(&data_00727788);
    }
    return &data_0072778C;
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
struct Y { u8 pad[0x94]; Vec3 m94; u8 mA0; };
struct X { Vec3 m0x; Vec3 m4() ; };
struct E4 { u8 pad[4]; f32 x, y, z; u8 pad1[0x1c - 0x10]; Y* m1C; };
struct Entry { u8 pad[0xe4]; E4* mE4; u8 mE8[0x104 - 0xe8]; };
struct SafeArr { u32 mSize; Entry* mData;
    Entry& operator[](u32 i) { if (i < mSize) return mData[i]; return mData[0]; } };
struct It { void** p; It(void** q) : p(q) {} bool operator!=(const It& o) const { return p != o.p; } It& operator++() { ++p; return *this; } };
struct PtrArr { s32 mNum; s32 mCap; void** mData; It begin() const { return It(mData); } It end() const { return It(mData + mNum); } };
struct D : Obj { u8 pad[0x478 - 4]; PtrArr m478; u8 pad1[0x620 - 0x484]; SafeArr m620; };
extern "C" char* data_00706E20;
extern "C" Obj** func_005841A8(char* g, s32 id, Obj** begin);
extern "C" bool func_00521380(E4* e);
extern "C" void func_001512B4(E4* e, void* p);
extern "C" void func_00151148(E4* e, s32 v);
extern "C" void func_004B9DAC(s32 id, const Vec3* a, const Vec3* b)
{
    Obj** it = func_005841A8(data_00706E20, id, *(Obj***)(data_00706E20 + 0x3dbc0));
    Obj** end = *(Obj***)(data_00706E20 + 0x3dbc8);
    if (it == end) return;
    Obj* o = *it;
    if (!isDerived(o)) o = 0;
    D* d = static_cast<D*>(o);
    if (!d) return;
    u32 i = 0;
    It pe = d->m478.end();
    for (It p = d->m478.begin(); p != pe; ++p, ++i) {
        Entry& e = d->m620[i];
        if (func_00521380(e.mE4)) {
            E4* x = e.mE4;
            x->x = b->x;
            x->y = b->y;
            x->z = b->z;
            func_001512B4(e.mE4, e.mE8);
            Y* y = e.mE4->m1C;
            y->mA0 = 1;
            y->m94 = *a;
            func_00151148(e.mE4, 1);
        }
    }
}
