typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F56C4[];
extern void func_0058FA08(unsigned);
extern unsigned func_0049116C(unsigned);
extern unsigned func_0040C55C(unsigned);


struct Leaf_func_0049116C {
  char tail_pad[4];
  ~Leaf_func_0049116C();
};
struct Leaf_func_0049116C_Derived : public Leaf_func_0049116C {
};
struct Leaf_func_0040C55C {
  char tail_pad[4];
  ~Leaf_func_0040C55C();
};
struct Leaf_func_0040C55C_Derived : public Leaf_func_0040C55C {
};
struct G6C_func_0048EEC0 {
  char pad_0[4];
  Leaf_func_0040C55C_Derived m_4;
  char pad_8[324];
  Leaf_func_0049116C_Derived m_14c;
  ~G6C_func_0048EEC0();
};
G6C_func_0048EEC0::~G6C_func_0048EEC0() {
unsigned k1, t1, t2, t3, t4, t5, t6, t7;

  unsigned t8, t9, t10, t11;


  t1 = *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x120);

  t2 = (unsigned)ro_006F56C4 + 0x44;

  *(unsigned *)((char *)((unsigned)(unsigned)this) + 4) = t2;


  *(unsigned *)((char *)((unsigned)(unsigned)this)) = (unsigned)ro_006F56C4;

  k1 = 0;

  *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x11C) = ((unsigned)ro_006F56C4 + 0x5C);

  if (t1 != 0) {
    func_0058FA08(t1);
    *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x120) = k1;
  }

  t4 = *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x128);

  if (t4 != 0) {
    func_0058FA08(t4);
    *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x128) = k1;
  }

  t5 = *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x138);

  if (t5 != 0) {
    func_0058FA08(t5);
    *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x138) = k1;
  }

  t6 = *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x144);

  if (t6 != 0) {
    t7 = *(unsigned *)((char *)t6);
    t8 = *(unsigned *)((char *)t7 + 4);
    ((unsigned (*)(unsigned))t8)(t6);
    *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x144) = k1;
  }

  t9 = *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x140);

  if (t9 != 0) {
    t10 = *(unsigned *)((char *)t9);
    t11 = *(unsigned *)((char *)t10 + 4);
    ((unsigned (*)(unsigned))t11)(t9);
    *(unsigned *)((char *)((unsigned)(unsigned)this) + 0x140) = k1;
  }
}
