typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct Primary { u8 pad0[0x32]; u16 m36; u8 pad1[0x2e8]; virtual ~Primary();
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); };
struct Secondary { u8 pad[0xec]; virtual void b0(); };
struct Base0 : Primary, Secondary { virtual ~Base0(); };
struct MemberBase { u8 pad[0x64]; ~MemberBase(); };
struct MemberM : MemberBase {};
struct B : Base0 { MemberM a; virtual ~B(){} };

extern void func_00588C14(void*, int, int);

struct D : B {
  u8 pad[0x548 - 0x474];
  MemberM m548;
  MemberM m5ac;
  MemberM m610;
  virtual ~D();
};

D::~D() {
  if (m36)
    func_00588C14(this, 0, 0);
}

