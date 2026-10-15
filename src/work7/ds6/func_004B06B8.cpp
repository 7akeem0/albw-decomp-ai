typedef unsigned char u8;
typedef unsigned int u32;

struct Primary { u8 pad[0x31c]; virtual ~Primary();
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); };
struct Secondary { u8 pad[0xec]; virtual void b0(); };
struct Base0 : Primary, Secondary { virtual ~Base0(); };
struct MemberBase { u8 pad[0x68]; ~MemberBase(); };
struct MemberM : MemberBase {};
struct B : Base0 { MemberM a; virtual ~B(){} };
struct C : B {
  virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
  virtual void d4(); virtual void d5(); virtual void d6();
  virtual ~C(){}
};
struct X : C {
  u8 pad[0x504 - 0x478];
  MemberM b;
  virtual ~X();
};
X::~X(){}
