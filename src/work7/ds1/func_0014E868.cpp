typedef unsigned char u8;
typedef unsigned int u32;

struct T2 { u32 pad; };
void* operator new(u32 size, T2) throw();
extern "C" void* func_002978FC(void*, void*, void*);
extern "C" int func_00581850(void*, void*);
extern "C" void* data_0070A500;

struct R {
    virtual void w0();
    virtual void w1();
    virtual void w2();
    void* m4;
};

struct VB1 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual R* v18();
};

struct T { T(void*, void*); u8 pad[0x1c]; };

struct S : VB1 {
    u8 pad[0x408 - 4];
    void* m408;                 // 0x408
    void f(void* a1);
};

void S::f(void* a1) {
    if (m408) return;
    if (a1 == 0) {
        void* g = data_0070A500;
        void* h = *(void**)((u8*)g + 0x30);
        void* p = *(void**)((u8*)h + 0x20);
        R* r = (R*)v18();
        r->w2();
        if (func_00581850(p, r->m4) == 0) return;
    }
    T2 t;
    T* n = new (t) T((u8*)this + 0x320, this);
    m408 = n;
}
