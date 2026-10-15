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
extern void func_004A3700(void*);
struct Node { char _p0[0x1c]; u32 m1c; char _p1[0x3c - 0x20]; u32 m3c; };
struct HandleObj { void* p; u32 id; };struct X : ActorBase { u8 pad[0xc84 - 0x550]; HandleObj mC84; void kill(); virtual ~X(); };
void X::kill(){ HandleObj* h=&mC84; if(h->p){ Node* n=(Node*)h->p; u32 id=h->id; if(n->m1c==id){ n->m3c=(n->m3c & ~0x44u)|8u; func_004A3700(n);} } }
X::~X(){ kill(); }

