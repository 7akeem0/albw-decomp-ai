typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_002317C0(unsigned, float);
void func_00454C38(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned k1, t1, t2, t3, t4, t5, t6;
  t1 = *(unsigned *)((char *)a1);
  t2 = *(unsigned *)((char *)a1 + 4);
  t3 = *(unsigned *)((char *)a1 + 8);
  t4 = a0 + 0xBC;
  k1 = 1;
  *(unsigned *)((char *)t4 + 8) = t3;
  *(unsigned *)((char *)t4) = t1;
  *(unsigned *)((char *)t4 + 4) = t2;
  *(unsigned char *)((char *)a0 + 0x8C) = k1;
  t5 = *(unsigned char *)((char *)a0 + 0xB8);
  if (t5 == 0) {
    t6 = a0 + 0x20;
    func_002317C0(t6, 1.0f);
    *(unsigned char *)((char *)a0 + 0xB8) = k1;
  }
  return;
}
