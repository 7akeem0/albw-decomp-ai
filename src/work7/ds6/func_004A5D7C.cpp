typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef float f32;

struct Inner { u8 _p[0x16]; u16 m16; };

extern f32 func_00532B54(void*);
extern void func_002317C0(void*, f32);

struct Obj;

struct V {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual bool v16();
};

struct Obj : V {
  u8 p0[0x10];
  Inner* m14;
  u8 p1[0x54];
  f32 m6c;
  void f();
};

void Obj::f() {
  if (!(m14->m16 & 2)) return;
  if (func_00532B54(&m6c) >= 1.0f) return;
  if (!v16()) return;
  func_002317C0(&m6c, 1.0f);
}
