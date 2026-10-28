typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_0070B728[];
extern void func_001507D8(unsigned, unsigned, unsigned);
extern  unsigned func_00656DE8(unsigned, unsigned);
struct G7_006F5980_lv_vp {
    virtual void G7_vf();
    unsigned f4;
    G7_006F5980_lv_vp(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
unsigned func_00135BA0(unsigned a0)
{
  unsigned r0, t3, t4;
  func_001507D8(a0, (unsigned)G7_ref(G7_006F5980_lv_vp((unsigned)"SE_Barrier_EXIST")), 0);
  t3 = (a0 + 0x400) + 0xFC;
  t4 = *(unsigned *)((char *)*(unsigned *)((char *)data_0070B728) + 0x44);
  r0 = t3;
  if (t4 != 0) {
    r0 = t3;
    if (t4 != t3) {
      return r0;
    }
    r0 = func_00656DE8((a0 + 0x400) + 0xB8, 1);
  }
  return r0;
}
