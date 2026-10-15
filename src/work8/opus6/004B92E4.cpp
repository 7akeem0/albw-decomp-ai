typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;
struct NoThrow {};
void* operator new(unsigned int, NoThrow) throw();

struct Owner;
struct Layer {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
    virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7();
    virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11();
    virtual void a12(); virtual void a13(); virtual void a14();
    virtual void init(u32 a, Owner* o);
};
struct LayerA : Layer { LayerA(); char pad[0x7c - 4]; };          // 0x369EF0
struct LayerB : Layer { LayerB(void* p); char pad[0x94 - 4]; };   // 0x36B150
struct LayerC : Layer { LayerC(); char pad[0x90 - 4]; };          // 0x37B818
struct LayerD : Layer { LayerD(); char pad[0x90 - 4]; };          // 0x3A1098

struct Owner { char pad[0x1c]; u32 m1c; };
void func_004B948C(Owner* o, Layer* l);

template <typename T> struct PtrArray {
    s32 mNum;
    s32 mMax;
    T** mPtrs;
    void pushBack(T* p) { if (mNum < mMax) { mPtrs[mNum] = p; ++mNum; } }
};

struct Obj {
    char pad[0x30];
    Owner* m30;
    PtrArray<Layer> m34;
    char pad40[0x6c - 0x40];
    Layer* m6c;
    Layer* m70;
    void f();
};

void Obj::f() {
    u32 id = m30->m1c;
    Layer* l;
    l = new ((NoThrow())) LayerA();
    m34.pushBack(l);
    l->init(id, m30);
    func_004B948C(m30, l);
    m70 = l;
    l = new ((NoThrow())) LayerB((char*)m70 + 0x78);
    m34.pushBack(l);
    l->init(id, m30);
    func_004B948C(m30, l);
    m6c = l;
    l = new ((NoThrow())) LayerC();
    m34.pushBack(l);
    l->init(id, m30);
    func_004B948C(m30, l);
    l = new ((NoThrow())) LayerD();
    m34.pushBack(l);
    l->init(id, m30);
    func_004B948C(m30, l);
}
