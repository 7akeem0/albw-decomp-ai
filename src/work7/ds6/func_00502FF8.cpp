typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;

struct V {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual u32 v16();
};

struct Inner2 {
  u8 pad[0x14];
  u32 m14;
};

struct Inner {
  u8 pad[0x64];
  Inner2* m64;
};

struct Obj : V {
  u8 pad0[0x184 - 4];
  u8 mState[0x2c9 - 0x184];
  s8 m2c9;
  u8 pad2[0x2e0 - 0x2ca];
  u32 m2e0;
};

extern void* data_0070D7D0;
extern void func_0030C874(void*);
extern void func_003A4C38(void*, void*);
extern void func_0030DCCC(void*, u32);
extern void func_003A53B0(void*, s8);

void func_00502FF8(Obj* self, void* a1) {
  s8 v = self->m2c9;
  func_0030C874((char*)self + 0x184);
  func_003A4C38((char*)self + 0x184, a1);
  func_0030DCCC((char*)self + 0x184, *(u32*)((char*)self + 0x2e0));
  func_003A53B0((char*)self + 0x184, v);
  Inner* q = (Inner*)data_0070D7D0;
  Inner2* r = q->m64;
  r->m14 = self->v16();
}
