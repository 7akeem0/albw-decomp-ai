typedef unsigned char u8;
typedef unsigned int u32;

struct CS { void lock(); void unlock(); };

struct Mgr {
  u8 p0[4];
  CS mCS;
};

extern Mgr* func_00580850();

struct P2 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void* v20(int);
};

struct P1 {
  u8 p0[0x10];
  P2* m10;
};

struct Obj {
  u8 p0[0x10];
  P1* m10;
  u8 p1[0x61 - 0x14];
  u8 m61;
  u8 p2[0x6c - 0x62];
  u8 m6c;
};

extern void func_00490AB8(void*, void*);
extern void func_0049F9B0(Obj*, int, void*);

struct Scoped{CS*p;Scoped(CS*t):p(t){t->lock();}~Scoped(){p->unlock();}};
void func_0049B88C(Obj* self) {
  Scoped guard(&func_00580850()->mCS);
  P2* p = self->m10 ? self->m10->m10 : 0;
  if (self->m61 != 0) {
    if (p) {
      void* r = p->v20(3);
      func_00490AB8(r, (char*)self + 0xbc);
    } else {
      func_0049F9B0(self, 3, (char*)self + 0xbc);
    }
  } else {
    func_0049F9B0(self, 2, (char*)self + 0xbc);
  }
  
}
