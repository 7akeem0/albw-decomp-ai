typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_00709F30[];
extern char data_00711F50[];
extern unsigned func_004EA104(unsigned, unsigned, unsigned);
extern void func_00547514(unsigned);
extern unsigned func_004C6654(unsigned, unsigned);
extern unsigned func_0066AA1C(unsigned, unsigned);
struct C_006F5980 {
    virtual void G7_vf();
    unsigned f4;
    C_006F5980(unsigned a0) { f4 = a0; }
};
template <class T> static inline unsigned G7_ref(const T& t) { return (unsigned)&t; }
unsigned func_004E75A0(unsigned a0)
{
  unsigned r0, t1, t4, t5, t6, t7;
  t1 = *(unsigned char *)((char *)a0 + 0x4E8);
  r0 = t1;
  if (t1 != 0) {
    r0 = 0;
    return r0;
  }
  func_004EA104(*(unsigned *)((char *)data_00711F50), (unsigned)G7_ref(C_006F5980((unsigned)"SE_PL_FAIRY_GET")), 0);
  t4 = *(unsigned short *)((char *)a0 + 0x2C);
  if (t4 == 1) {
    t5 = a0 + 4;
    func_00547514(t5);
  }
  t6 = *(unsigned *)((char *)data_00709F30);
  if (t6 != 0) {
    t7 = 0x20;
    func_004C6654(t6, t7);
  }
  func_0066AA1C((a0 + 0x400) + 0xE4, 1);
  r0 = 1;
  return r0;
}
