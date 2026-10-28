typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern unsigned func_0055BF20(unsigned);
extern  unsigned func_0066F030(unsigned, unsigned);
extern  void func_00533048(unsigned, unsigned, unsigned);
struct G7_006F5980_lv_vp {
    virtual void G7_vf();
    unsigned f4;
    G7_006F5980_lv_vp(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
void func_00484438(unsigned a0)
{
  unsigned t2, t4;
  t2 = func_0055BF20(*(unsigned *)((char *)a0 + 0xE4));
  if (t2 != 0) {
    t4 = func_0055BF20(*(unsigned *)((char *)a0 + 0xE8));
    if (t4 != 0) {
      func_0066F030(a0 + 0x74, 2);
      return;
    }
  }
  func_00533048(a0, (unsigned)G7_ref(G7_006F5980_lv_vp((unsigned)"SE_S_CROSS_RESULT_GAUGE")), 0);
  return;
}
