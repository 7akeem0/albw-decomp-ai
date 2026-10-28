typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern void func_00150A84(unsigned, unsigned, unsigned);
struct G7_006F5980_lv_vp {
    virtual void G7_vf();
    unsigned f4;
    G7_006F5980_lv_vp(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
unsigned func_003351A8(unsigned a0)
{
  unsigned h901, h902, r0;
  h901 = a0 + 0x3E4;
  *(float *)((char *)h901) = 0.0f;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(unsigned *)((char *)a0 + 0x2E0) = *(unsigned *)((char *)a0 + 0x2E0) & (-3);
  r0 = *(unsigned char *)((char *)a0 + 0x530);
  if (r0 == 0) {
    return r0;
  }
  func_00150A84(a0, (unsigned)G7_ref(G7_006F5980_lv_vp((unsigned)"SE_OBJ_FALL")), 0);
  h902 = a0;
  *(unsigned char *)((char *)h902 + 0x530) = 0;
  *(unsigned char *)((char *)a0 + 0x531) = 1;
  r0 = 0;
  return r0;
}
