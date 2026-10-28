typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006E7160[];
extern unsigned func_0012C9C4(void);
extern unsigned func_0010B3EC(unsigned, unsigned, unsigned);
extern unsigned func_0010BAB4(unsigned, unsigned);

static unsigned* listAt(unsigned* object)
{
  return object + 7;
}

unsigned func_00392940(unsigned a0)
{
  unsigned k1, r5, t1, t4;
  t1 = func_0012C9C4();
  k1 = 0;
  *(unsigned *)((char *)t1) = (unsigned)ro_006E7160;
  *(unsigned *)((char *)t1 + 0x1C) = k1;
  *(unsigned *)((char *)t1 + 0x20) = k1;
  *(unsigned *)((char *)t1 + 0x24) = k1;
  func_0010B3EC((unsigned)listAt((unsigned*)t1), 2, t1 + 0x28);
  *(unsigned *)((char *)t1 + 0x30) = k1;
  *(unsigned *)((char *)t1 + 0x34) = k1;
  t4 = func_0010BAB4(0x10, r5);
  if (t4 != 0) {
    *(unsigned *)((char *)t4) = k1;
    *(unsigned *)((char *)t4 + 4) = k1;
    *(unsigned *)((char *)t4 + 8) = k1;
    *(unsigned *)((char *)t4 + 0xC) = (-1);
  }
  *(unsigned *)((char *)t1 + 0x38) = t4;
  *(float *)((char *)t1 + 0x3C) = 0.0f;
  *(unsigned *)((char *)t1 + 0x40) = k1;
  return t1;
}
