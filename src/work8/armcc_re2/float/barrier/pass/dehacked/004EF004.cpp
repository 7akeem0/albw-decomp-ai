typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct V {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10();
};

struct Obj {
  u8 pad0[0x67];
  u8 m67;
  u8 pad1[0x6a - 0x68];
  u16 m6a;
  V* m6c[2];
  u8 pad3[0x80 - 0x74];
  u32 m80;
};

extern void* data_00706E20;
extern void* data_00711F50;
extern void func_004C4FF8(void*, u32);
extern void func_00297534(void*);

template<class T0> inline void hlp0(T0 self) { func_004C4FF8(data_00706E20, 1 - self->m6a);
  self->m67 = 1; }
void func_004EF004(Obj* self) {
  hlp0(self); 
  u32 i = 1 - self->m6a;
  V** base = self->m6c;
  V** pp = (i < 2) ? (base + i) : base;
  (*pp)->v10();
  func_00297534(data_00711F50);
  self->m80 = 0;
}
