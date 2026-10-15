typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void* func_0010E294(void*);
extern "C" void func_0010C0B8(void*);
extern "C" void* data_00715430;

struct VB {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
};

struct S : VB {
    u8 pad[0x10 - 4];
    void* m10;                  // 0x10
    s32 m14;                    // 0x14
    u8 m18[0x34 - 0x18];        // 0x18..0x33
    void (*m34)(int);           // 0x34
    void f();
};

void S::f() {
    if (m34) {
        m34(1);
        return;
    }
    void* r = func_0010E294((u8*)data_00715430 + 0x24);
    s32 v;
    if (m10 == r && m14 > 0) {
        v = m14 + 1;
    } else {
        func_0010C0B8((u8*)this + 0x18);
        v17();
        m10 = r;
        v = 1;
    }
    m14 = v;
}
