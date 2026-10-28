typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_0070FB60[];
extern char data_00711F50[];
extern unsigned func_001DD484(unsigned, unsigned, unsigned);
extern unsigned func_004EA104(unsigned, unsigned, unsigned);
extern void func_00547514(unsigned);
struct C_006F5980 {
    virtual void G7_vf();
    unsigned f4;
    C_006F5980(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
void func_004E8860(unsigned a0)
{
  unsigned t2, t4, t5;
  t2 = func_001DD484(*(unsigned *)((char *)data_0070FB60), 4, 1);
  if (t2 == 0) {
    return;
  }
  func_004EA104(*(unsigned *)((char *)data_00711F50), (unsigned)G7_ref(C_006F5980((unsigned)"SE_PL_HEART_GET")), 0);
  t4 = *(unsigned short *)((char *)a0 + 0x2C);
  if (t4 == 1) {
    t5 = a0 + 4;
    func_00547514(t5);
  }
  *(unsigned char *)((char *)a0 + 0x2D7) = 1;
  return;
}
