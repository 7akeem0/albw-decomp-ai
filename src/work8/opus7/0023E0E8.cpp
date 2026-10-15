typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef short s16; typedef float f32;
struct SafeString { virtual void assure() const; const char* mStr; SafeString(const char* s) : mStr(s) {} };
struct Sub { char pad[0x44]; u8 m44; };
struct Elem40 { char pad[0x40]; };
struct Base { char pad[4]; Elem40 a[20];
    Elem40* get(s32 i) { Elem40* p = a; if ((u32)i < 20) p += i; return p; } };
struct Node;
struct PtrArr4 { Node* a[4];
    Node*& operator[](s32 i) { if ((u32)i < 4) return a[i]; return a[0]; } };
struct Obj;
void func_004CF478(Node* p, bool on, s32 z);
Base* func_004F042C();
s32 func_005583F8(Elem40* e);
s32 func_004EFFF8(s32 i);
void func_002C425C(void* p, Node* n, s32 a, s32 b);
void func_00151148(void* p, s32 n);
void func_004A879C(void* mgr, Sub* p, s32 n);
void func_00324964(Obj* self);
void func_00150A84(Obj* self, const SafeString& s, s32 z);
extern "C" void* data_00709D28;
struct Obj {
    char _0[0x2c]; s16 m2c; char _2e[0x320 - 0x2e];
    char m320[0x7b0 - 0x320];
    Sub* m7b0;
    PtrArr4 m7b4;
    Node* m7c4;
    char _7c8[4];
    void* m7cc;
    void func_0023DF30();
    void f();
    void notify(Sub*& s) { func_004A879C(data_00709D28, s, 2); }
    inline void show(bool on);
};

void Obj::show(bool on) {
    Sub*& s = m7b0;
    m7b0->m44 = on;
    func_004CF478(m7c4, on, 0);
    func_00151148(m7cc, on);
    func_004A879C(data_00709D28, s, 2);
}
void Obj::f() {
    for (s32 i = 0; i < 4; i++) func_004CF478(m7b4[i], 0, 0);
    s32 idx = 0x32;
    Base* b = func_004F042C();
    if (b) idx = func_005583F8(b->get(m2c));
    m7c4 = m7b4[func_004EFFF8(idx)];
    func_002C425C(m320, m7c4, 0, 0);
    func_0023DF30();
    show(1);
    func_00324964(this);
    func_00150A84(this, SafeString("SE_CrossBoard_APPEAR"), 0);
}
