typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_0070B850[];
extern void func_001B6C04(unsigned);
extern unsigned func_00463C68(unsigned);
extern void func_0016656C(unsigned, unsigned);
extern unsigned func_00166C00(unsigned, unsigned);
extern unsigned func_004B948C(unsigned, unsigned);
extern void func_00533078(unsigned, unsigned, unsigned);
struct G7_006F5980_lv_vp {
    virtual void G7_vf();
    unsigned f4;
    G7_006F5980_lv_vp(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
void func_00437C74(unsigned a0)
{
  unsigned k1, t2;
  func_001B6C04(a0);
  func_00463C68(*(unsigned *)((char *)a0 + 0x78));
  t2 = *(unsigned *)((char *)a0 + 0x78);
  k1 = (unsigned)data_0070B850;
  *(unsigned *)((char *)t2 + 0x18) = *(unsigned *)((char *)t2 + 0x18) & (-3);
  func_0016656C(*(unsigned *)((char *)k1), a0);
  func_00166C00(*(unsigned *)((char *)k1), 0);
  func_004B948C(a0, *(unsigned *)((char *)a0 + 0x74));
  func_004B948C(a0, *(unsigned *)((char *)a0 + 0x78));
  func_00533078(a0, (unsigned)G7_ref(G7_006F5980_lv_vp((unsigned)"SE_S_COLLECT_APPEAR")), 0);
  *(unsigned char *)((char *)a0 + 0x7C) = 0;
  return;
}
