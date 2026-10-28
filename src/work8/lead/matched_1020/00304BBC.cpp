typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_0070FB60[];
extern void func_00150A84(unsigned, unsigned, unsigned);
extern void func_001DDCC4(unsigned, unsigned);
extern unsigned func_00547514(unsigned);
struct G7_006F5980_lv_vp {
    virtual void G7_vf();
    unsigned f4;
    G7_006F5980_lv_vp(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
unsigned func_00304BBC(unsigned a0)
{
  unsigned k1, r0, t4, t5, t9;
  k1 = 1;
  if (*(unsigned char *)((char *)a0 + 0x519) == 0) {
    func_00150A84(a0, (unsigned)G7_ref(G7_006F5980_lv_vp((unsigned)"SE_DoorHolocaust_OPEN")), 0);
    *(unsigned char *)((char *)a0 + 0x519) = k1;
  }
  t4 = *(unsigned *)((char *)(a0 + 0x400) + 0xE4);
  t5 = *(unsigned *)((char *)((a0 + 0x400) + 0xE4) + 4);
  r0 = t4;
  if (t4 < t5) {
    r0 = t4 + 1;
    *(unsigned *)((char *)a0 + 0x4E4) = r0;
  }
  if (t4 >= t5) {
    *(unsigned char *)((char *)a0 + 0x496) = k1;
    func_001DDCC4(*(unsigned *)((char *)data_0070FB60), 0);
    t9 = func_00547514(a0 + 4);
    *(unsigned char *)((char *)a0 + 0x2D7) = k1;
    r0 = t9;
  }
  return r0;
}
