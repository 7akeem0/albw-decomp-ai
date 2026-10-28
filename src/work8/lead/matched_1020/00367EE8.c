typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_002317C0(unsigned, float, unsigned);
void func_00367EE8(unsigned a0, unsigned a1, unsigned a2, float fa0)
{
  unsigned r0, r2, r4, r5, t1, t2, t3, t4;
  unsigned t6, t7, t9, t10, t11;
  float x1;
  t1 = (int)a1 > 0xA ? 1 : 0;
  t2 = a0 + 0x44;
  t3 = t2;
  if (t1 < 2) {
    t3 = t2 + (t1 << 2);
  }
  t4 = *(unsigned *)((char *)t3);
  if (t4 != 0) {
    x1 = 1.0f;
    func_002317C0(t4, x1, t3);
  }
  r0 = *(unsigned *)((char *)a0 + 0x40);
  r4 = a0;
  r5 = a1;
  if (r0 != 0) {
    return;
  }
  do {
    t6 = r4 + 0x4C;
    t7 = t6;
    if (r0 < 20u) {
      t7 = t6 + (r0 << 2);
    }
    if (*(unsigned *)((char *)t7) != 0) {
      t9 = r4 + 0x4C;
      t10 = t9;
      if (r0 < 20u) {
        t10 = t9 + (r0 << 2);
      }
      t11 = *(unsigned *)((char *)t10);
      r2 = ((int)r0 < (int)r5 ? 1 : 0) | (*(unsigned char *)((char *)t11 + 0x44) & 0xFE);
      *(unsigned char *)((char *)t11 + 0x44) = r2;
    }
    r0 = r0 + 1;
  } while ((int)r0 < 0x14);
  return;
}
