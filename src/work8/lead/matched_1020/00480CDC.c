typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_0070B800[];
extern char data_00711F50[];
extern unsigned func_003A0990(unsigned, unsigned);
extern void func_0012EA38(unsigned);
extern  unsigned func_002944C4(unsigned, unsigned, unsigned);
void func_00480CDC(unsigned a0)
{
  unsigned lv[2];
  unsigned t1, t2, t3, t4, kt2;
  t1 = *(unsigned *)((char *)a0 + 0x110);
  *(unsigned char *)((char *)t1 + 0xE) = 1;
  t2 = *(unsigned *)((char *)a0 + 0x10C);
  func_003A0990(t2, 1);
  *(unsigned char *)((char *)a0 + 0xA7) = 0x80;
  t3 = *(unsigned *)((char *)data_0070B800);
  func_0012EA38(t3);
  *(unsigned *)((char *)&lv[1]) = (unsigned)"SE_S_CROSS_COMPLETE";
  *(unsigned *)((char *)&lv[0]) = (unsigned)ro_006F5988;
  t4 = *(unsigned *)((char *)data_00711F50);
  kt2 = (unsigned)ro_006F5988;
  func_002944C4(t4, (unsigned)&lv[0], kt2);
  return;
}
