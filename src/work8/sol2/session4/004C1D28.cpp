typedef unsigned char u8;
typedef unsigned int u32;

struct ABaseA { u8 padA[0x31c]; virtual ~ABaseA();
  virtual void a0(); virtual void a1(); virtual void a2();
  virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8();
  virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12();
  virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16();
  virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); };
struct ABaseB { u8 padB[0x410 - 0x324]; virtual void b0(); };
struct ActorBase : ABaseA, ABaseB { virtual ~ActorBase(); };
struct MemXBase { ~MemXBase(); u8 padX[0x54]; }; struct MemX : MemXBase {};
struct MemY { ~MemY(); u8 padY[0x2e4]; };
struct MemZ { ~MemZ(); u8 padZ[0x68]; };
struct ActB : ActorBase { virtual ~ActB() {} MemZ mZ; };
struct ActC : ActB {
  virtual ~ActC() {}
  virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
  virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8();
  virtual void c9(); virtual void c10(); virtual void c11(); virtual void c12();
  virtual void c13(); virtual void c14(); virtual void c15();
  MemY mY;
  MemX mX;
};
extern void func_0036D0E0(void*);
struct M36 { u32 w; ~M36(){ func_0036D0E0(this); } };
struct D : ActC {
  virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
  virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8();
  u8 pad[0x864 - 0x7b0];
  M36 m864;
  M36 m868;
  virtual ~D();
};
D::~D(){}
