typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Heap {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void free28();
};
void* operator new(unsigned int size, Heap* heap, int align) throw();
struct Self;
struct Task {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void start();
    Task(Heap* h, Self* owner);
    u8 pad4[0x78 - 4];
    s32 m78;
    u8 pad7c[0x90 - 0x7c];
    u8 m90;
    u8 pad91[3];
};
struct FlagMgr;
extern FlagMgr* data_0070B728;
bool func_00584B94(FlagMgr* m, s32 id);

struct Self {
    u8 pad0[0x8e0];
    u8 m8E0;
    u8 pad8e1[0x928 - 0x8e1];
    s32 m928;
    s32 m92C;
    u8 pad930[0xde8 - 0x930];
    s32 mDE8;
    u8 padDEC[4];
    Heap* mDF0;
    Task* mDF4;
    void begin(s32 n);
};

void Self::begin(s32 n)
{
    Task*& t = mDF4;
    s32 st = t != 0 ? t->m78 : 0;
    if (t == 0 || st == 3 || st == 4 || st == 0) {
        m92C = 0;
        m928 = 0;
        if (n > 0 && m8E0 == 0 && data_0070B728 != 0 && func_00584B94(data_0070B728, 0x386)) {
            mDE8 = n;
            if (mDF4 != 0) mDF0->free28();
            Task* p = new (mDF0, 4) Task(mDF0, this);
            mDF4 = p;
            p->m90 = 1;
            t->start();
        }
    }
}
