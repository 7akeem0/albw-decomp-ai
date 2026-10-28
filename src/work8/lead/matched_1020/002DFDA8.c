typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070B898[];
extern void func_00503CA4(unsigned, unsigned, unsigned);
extern unsigned func_0010BAB4(unsigned, unsigned);
extern unsigned func_0045BB5C(unsigned);
extern void func_004B9958(unsigned, unsigned);
extern unsigned func_0045020C(unsigned);
extern unsigned func_00486EE8(unsigned);
extern unsigned func_0045E644(unsigned);
extern unsigned func_00487038(unsigned);
extern unsigned func_00489264(unsigned);
extern unsigned func_00475CC4(unsigned);
void func_002DFDA8(unsigned a0)
{
  unsigned r5, t1, t2, t3, t4, t5, t6, t7;
  unsigned t8, t9, t10, t11, t12, t13, t14, t15;
  unsigned t16, t17;
  t1 = *(unsigned *)((char *)data_0070B898);
  func_00503CA4(t1, 0xA, 0);
  t2 = func_0010BAB4(0x238, r5);
  t3 = t2;
  if (t2 != 0) {
    t3 = func_0045BB5C(t2);
  }
  *(unsigned *)((char *)a0 + 0x24) = t3;
  func_004B9958(t3, 4);
  t4 = func_0010BAB4(0x80, r5);
  t5 = t4;
  if (t4 != 0) {
    t5 = func_0045020C(t4);
  }
  *(unsigned *)((char *)a0 + 0x28) = t5;
  func_004B9958(t5, 4);
  t6 = func_0010BAB4(0x8C, r5);
  t7 = t6;
  if (t6 != 0) {
    t7 = func_00486EE8(t6);
  }
  *(unsigned *)((char *)a0 + 0x2C) = t7;
  func_004B9958(t7, 4);
  t8 = func_0010BAB4(0x16C, r5);
  t9 = t8;
  if (t8 != 0) {
    t9 = func_0045E644(t8);
  }
  *(unsigned *)((char *)a0 + 0x1C) = t9;
  func_004B9958(t9, 2);
  t10 = func_0010BAB4(0x8C, r5);
  t11 = t10;
  if (t10 != 0) {
    t11 = func_00487038(t10);
  }
  *(unsigned *)((char *)a0 + 0x14) = t11;
  func_004B9958(t11, 2);
  t12 = func_0010BAB4(0x88, r5);
  t13 = t12;
  if (t12 != 0) {
    t13 = func_00489264(t12);
  }
  *(unsigned *)((char *)a0 + 0x18) = t13;
  func_004B9958(t13, 2);
  t14 = func_0010BAB4(0x7C, r5);
  t15 = t14;
  if (t14 != 0) {
    t15 = func_00475CC4(t14);
  }
  *(unsigned *)((char *)a0 + 0x20) = t15;
  func_004B9958(t15, 2);
  t16 = *(unsigned *)((char *)a0 + 0x2C);
  *(unsigned char *)((char *)t16 + 0xE) = 1;
  t17 = *(unsigned *)((char *)a0 + 0x14);
  *(unsigned char *)((char *)t17 + 0xE) = 1;
  return;
}
