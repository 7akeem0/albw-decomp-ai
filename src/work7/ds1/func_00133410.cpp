// 0x133410: D1 destructor, vtable ro_006C63F4.
// vptr store, a virtual call on a pointer member at +0x28ec, then a member-dtor
// chain over four subobjects at +0x2a00/+0x2aac/+0x2bac/+0x2bc8 (last two have
// out-of-line empty dtors -> linker NOPs).
typedef unsigned char u8;

struct Child {
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual void a5();
    virtual void a6();
    virtual void a7();
    virtual void a8(int);
};

struct Base { virtual ~Base(); };   // external, non-trivial
struct T : Base { virtual ~T(); };  // external -> emits bl _ZN1TD1Ev in C::~C

struct C {
    char    pad0[0x28ec - 4];
    Child*  m28ec;
    char    pad1[0x2a00 - 0x28ec - 4];
    T       m2a00;
    char    pad2[0x2aac - 0x2a00 - sizeof(T)];
    T       m2aac;
    char    pad3[0x2bac - 0x2aac - sizeof(T)];
    T       m2bac;
    char    pad4[0x2bc8 - 0x2bac - sizeof(T)];
    T       m2bc8;
    virtual ~C();
};

C::~C() {
    m28ec->a8(0);
}
