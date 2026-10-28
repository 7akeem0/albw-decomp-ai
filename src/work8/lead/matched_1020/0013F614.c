typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709D28[];
extern unsigned func_0054D964(unsigned, unsigned);
extern unsigned func_0010BAB4(unsigned, unsigned);
extern unsigned func_004EDC9C(unsigned);
extern unsigned func_004ED9C8(unsigned, unsigned, unsigned);
extern void func_004EDAD0(unsigned, unsigned);
extern unsigned func_004A7F00(unsigned, unsigned, unsigned);
void* memcpy(void*, const void*, unsigned);
unsigned func_0013F614(unsigned a0)
{
  unsigned lv[2];
  unsigned r0, r5, t1, t3, t4, t5, t6, t9, ka9;
  unsigned t13, t19, t20, t21, child;
  t1 = func_0054D964(a0, 1);
  *(unsigned *)((char *)a0 + 0x424) = t1;
  t4 = func_0010BAB4(0x48, r5);
  t5 = t4;
  if (t4 != 0) {
    t5 = func_004EDC9C(t4);
  }
  t6 = *(unsigned *)((char *)a0 + 0x424);
  *(unsigned *)((char *)a0 + 0x428) = t5;
  if ((t6 != 0) && (t5 != 0)) goto L4;
  r0 = 1;
  *(unsigned char *)((char *)a0 + 0x2D7) = r0;
  return r0;
L4:;
  t9 = (a0 + 0x400) + 0x28;
  t3 = (a0 + 0x400) + 0x24;
  *(unsigned short *)((char *)&lv[1]) = 0xE4;
  *(unsigned *)((char *)&lv[1]) = 0xE4;
  *(unsigned short *)((char *)t6 + 0x28) = *(unsigned short *)((char *)&lv[1]);
  memcpy(&child, (char *)a0 + 0x428, 4);
  *(unsigned char *)((char *)child + 0x44) = 0;
  t13 = *(unsigned *)((char *)t3);
  *(unsigned *)((char *)*(unsigned *)((char *)t9) + 0x18) = t13;
  func_004ED9C8(*(unsigned *)((char *)t9), t13, 0);
  *(unsigned *)((char *)&lv[0]) = *(unsigned *)((char *)a0 + 0x2CC);
  func_004EDAD0(*(unsigned *)((char *)t9), (unsigned)&lv[0]);
  ka9 = *(unsigned *)((char *)t9) + 0x2C;
  *(unsigned short *)((char *)ka9) = *(unsigned short *)((char *)a0 + 0x54);
  t19 = *(unsigned *)((char *)t9);
  t20 = *(unsigned *)((char *)data_00709D28);
  t21 = func_004A7F00(t20, t19, 2);
  return t21;
}
