typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006930E0[];
extern char ro_006F5988[];
extern char data_00706E20[];
extern char data_0070FB60[];
extern char data_00711F50[];
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_00588BE4(unsigned);
extern unsigned func_00556E64(unsigned);
extern unsigned func_001DD484(unsigned, unsigned, unsigned);
extern unsigned func_004EA104(unsigned, unsigned, unsigned);
extern void func_00547514(unsigned);
struct G7_006F5980_lv_vp {
    virtual void G7_vf();
    unsigned f4;
    G7_006F5980_lv_vp(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
unsigned func_0023F9EC(unsigned a0, unsigned a1)
{
  unsigned h901, t1, t7, t8, t11;
  t1 = *(unsigned *)((char *)a1 + 0x2C);
  if ((t1 != 0) && (*(unsigned char *)((char *)t1 + 1) == 17u)) {
    t7 = func_0052FBA0((*(unsigned *)((char *)data_00706E20) + 0x3D800) + 0x3BC, *(unsigned *)((char *)a1 + 0x28));
    if (t7 != 0) {
      t8 = func_00588BE4(t7);
      h901 = *(unsigned *)((char *)ro_006930E0);
      if (t8 == h901) {
        t11 = func_00556E64(*(unsigned *)((char *)data_0070FB60));
        if (t11 != 0) {
          func_001DD484(*(unsigned *)((char *)data_0070FB60), 4, 1);
          func_004EA104(*(unsigned *)((char *)data_00711F50), (unsigned)G7_ref(G7_006F5980_lv_vp((unsigned)"SE_PL_HEART_GET")), 0);
          func_00547514(a0 + 4);
          *(unsigned char *)((char *)a0 + 0x2D7) = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}
