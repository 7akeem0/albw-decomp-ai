typedef unsigned char u8; typedef unsigned int u32; typedef int s32;
struct CS { u32 m0; };
struct Mgr { u32 m0; CS cs; };
Mgr* func_00580850();
void func_0010C0B8(CS* c);
void func_0010EEE0(CS* c);
struct ScopedLock {
    CS* mCs;
    ScopedLock(CS* c) : mCs(c) { func_0010C0B8(c); }
    ~ScopedLock() { func_0010EEE0(mCs); }
};
struct Res;
struct Node {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c(); virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c(); virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c(); virtual Res* get(s32 k);
};
struct Sub10 { u8 pad[0x10]; Node* m10; };
struct Obj;
void func_0049F9B0(Obj* o, s32 k, void* p);
void func_00490AB8(Res* r, void* p);
struct Obj {
    u8 pad[0x10]; Sub10* m10; u8 pad14[0x61 - 0x14]; u8 m61; u8 pad62[0xbc - 0x62]; u8 mbc[0x10c - 0xbc]; u8 m10c[4];
    void f();
};
void Obj::f() {
    ScopedLock lk(&func_00580850()->cs);
    Node* n = m10 ? m10->m10 : 0;
    if (m61 != 0) { if (n != 0) { func_00490AB8(n->get(6), mbc); func_00490AB8(n->get(9), m10c); } else { func_0049F9B0(this, 6, mbc); func_0049F9B0(this, 9, m10c); } } else { func_0049F9B0(this, 5, mbc); func_0049F9B0(this, 8, m10c); }
}
