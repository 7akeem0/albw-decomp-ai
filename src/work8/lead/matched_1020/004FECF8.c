typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00706E20[];
extern void func_002DFF7C(unsigned);
extern unsigned func_00588BE4(unsigned);
extern void func_00547884(unsigned, unsigned, unsigned);
extern unsigned func_004C4AF4(unsigned, unsigned, unsigned);
extern void func_004F8638(unsigned, unsigned);
void func_004FECF8(unsigned a0)
{
  if (*(unsigned short *)((char *)a0 + 0x30) == 1) {
    {
      unsigned lv[177];
      *(unsigned *)((char *)&lv[8]) = 0;
      *(unsigned *)((char *)&lv[9]) = 0;
      *(unsigned *)((char *)&lv[7]) = 0;
      *(unsigned *)((char *)&lv[18]) = 0;
      *(unsigned *)((char *)&lv[19]) = 0;
      *(unsigned *)((char *)&lv[176]) = 0;
      func_002DFF7C((unsigned)&lv[0]);
      func_00547884(a0 + 4, (unsigned)&lv[0], func_00588BE4(a0));
      func_004C4AF4(*(unsigned *)((char *)data_00706E20), (unsigned)&lv[0], 0);
    }
  }
  func_004F8638(a0, (-1));
  return;
}
