typedef unsigned char u8;
typedef unsigned int u32;

struct Primary { u8 pad[0x31c]; virtual ~Primary();
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); };
struct Secondary { u8 pad[0x22c]; virtual void s0(); };
struct ActorBase : Primary, Secondary { virtual ~ActorBase(); };
extern void func_0036D0E0(void*);
struct MemberM { u32 w; ~MemberM(){ func_0036D0E0(this); } };
struct S : ActorBase {
  MemberM m550;
  MemberM m554;
  MemberM m558;
  MemberM m55c;
  virtual ~S();
};
S::~S(){}
