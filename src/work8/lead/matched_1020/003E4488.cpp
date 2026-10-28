typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00714840[];
extern char data_00714888[];
extern unsigned func_00102E40(unsigned, unsigned);
extern unsigned func_003E4CB8(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_003E5388(void);
extern unsigned func_003E489C(unsigned, unsigned, unsigned);
extern unsigned func_003E5660(void);
extern unsigned func_003E4DDC(unsigned, unsigned, unsigned, unsigned);
struct G7_003E4488_lv {
    unsigned f0;
    unsigned char p4[8];
    G7_003E4488_lv(unsigned a0) { f0 = a0; }
};
unsigned func_003E4488(void)
{
  unsigned k1, t1, t2, t3, t4, t5;
  func_00102E40(0, 0);
  t1 = *(unsigned *)((char *)(unsigned)data_00714888 + 0x38);
  if (t1 != 0) {
    t2 = *(unsigned *)((char *)(unsigned)data_00714888 + 0x78);
    ((unsigned (*)(unsigned))t1)(t2);
  }
G7_003E4488_lv lv(0);
  func_003E4CB8(2, 0, (unsigned)((char *)&lv + 8), (unsigned)((char *)&lv + 4));
  t3 = *(unsigned *)((char *)((char *)&lv + 8));
  k1 = (unsigned)data_00714840;
  if (t3 != 0) {
    t4 = *(unsigned *)((char *)((char *)&lv + 4));
  }
  if ((t3 != 0) && (t3 != t4)) goto L2;
  func_003E5388();
  func_003E489C(0, 0, *(unsigned *)((char *)k1));
  goto L3;
L2:;
  func_003E5660();
  t5 = *(unsigned *)((char *)((char *)&lv + 8));
  func_003E4DDC(t5, 0, 0, (*(unsigned *)((char *)k1)));
L3:;
  return 1;
}
