typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern void func_00231524(unsigned);
extern  void func_00533078(unsigned, unsigned, unsigned);
struct G7_00424F54_lv_vp {
    virtual void G7_vf();
    unsigned f4;
    G7_00424F54_lv_vp(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
void func_00424F54(unsigned a0)
{
  func_00231524(a0 + 0x48);
  func_00533078(a0, (unsigned)G7_ref(G7_00424F54_lv_vp((unsigned)"SE_S_ITEM_SLIDER_HOLD")), 0);
  return;
}
