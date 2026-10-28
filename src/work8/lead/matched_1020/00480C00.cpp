typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern unsigned func_003A0B1C(unsigned, unsigned);
extern  void func_00533078(unsigned, unsigned, unsigned);
struct G7_006F5980_lv_vp {
    virtual void G7_vf();
    unsigned f4;
    G7_006F5980_lv_vp(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
void func_00480C00(unsigned a0)
{
  func_003A0B1C(*(unsigned *)((char *)a0 + 0x10C), *(unsigned *)((char *)a0 + 0x11C));
  func_00533078(a0, (unsigned)G7_ref(G7_006F5980_lv_vp((unsigned)"SE_S_CROSS_RECORD_CHANGE")), 0);
  return;
}
