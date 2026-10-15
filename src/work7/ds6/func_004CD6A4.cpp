typedef unsigned char u8;
typedef unsigned int u32;

struct V {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8();
};

struct Obj {
  u8 pad[0x44];
  V* m44;
  bool f(V* a1);
};

extern bool func_004CDB2C(void*, void*);

bool Obj::f(V* a1) {
  if (func_004CDB2C(this, a1)) return true;
  V* p = m44;
  if (p != a1) return false;
  p->v8();
  m44 = 0;
  return true;
}
