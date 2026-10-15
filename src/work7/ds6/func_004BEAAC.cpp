typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct V {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
  virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
  virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
  virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
  virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
  virtual void v40(); virtual void v41(); virtual void v42();
  virtual void v43(u32, u32);
};

struct Obj : V {
  u8 p0[0x7a0 - 4];
  void* m7a0;
  u8 p1[0x98a - 0x7a4];
  u8 m98a;
};

extern void func_004CF478(void*, int, int);

extern s32 func_004BEB08(Obj*);
s32 func_004BEAAC(Obj* self, int a1) {
  s32 s = self->m98a;
  if (s == 10) return func_004BEB08(self);
  if (a1) return 1;
  self->v43(3, 0);
  func_004CF478(self->m7a0, 1, 0);
  return 1;
}

