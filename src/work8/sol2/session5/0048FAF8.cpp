typedef unsigned char u8;
typedef unsigned int u32;

struct V {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5();
  virtual void v6(void*, void*, void*);
};

struct Obj : V {
  u8 p0[0x14 - 4];
  void* m14;
  u8 p1[0x20 - 0x18];
  u32 m20;
  void f(void* a1, void* a2, void* a3, u32 a4, void* a5);
};

struct Triple{void*a,*b,*c;};void store(void**p,Triple v){p[0]=v.a;p[1]=v.b;p[2]=v.c;}
void Obj::f(void* a1, void* a2, void* a3, u32 a4, void* a5) {
  if (m14 == 0) {
    Triple values={a1,a2,a3};store((void**)((char*)this+0x14),values);
    u32 t = m20;
    if (a4) t |= 1;
    else t &= ~1u;
    m20 = t;
    v6(a1, a2, a5);
  }
}

