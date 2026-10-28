typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0058AB74(unsigned);
unsigned func_002A405C(unsigned a0)
{
  unsigned r0, r4, t2, t3, t4, t5, t6;
  if (*(unsigned *)((char *)a0 + 0xB28) != 1065353216u) {
    r0 = 0;
    return r0;
  }
  t2 = *(unsigned char *)((char *)a0 + 0xB92);
  if (t2 == 0) {
    r0 = 0;
    return r0;
  }
  if ((t2 == 3) || (t2 == 4)) {
    r0 = 0;
    return r0;
  }
  t3 = *(signed char *)((char *)a0 + 0x9E4);
  if ((t3 == 13u) || (t3 == 16u)) {
    r0 = 0;
    return r0;
  }
  if ((t3 == 17u) || (t3 == 2)) {
    r0 = 0;
    return r0;
  }
  if ((t3 == 14u) || (t3 == 15u)) {
    r0 = 0;
    return r0;
  }
  t4 = r4;
  if (t3 != 18u) {
    t4 = a0;
  }
  if (t3 == 18u) {
    r0 = 0;
    return r0;
  }
  t5 = func_0058AB74(a0);
  if (t5 == 2) {
    r0 = 0;
    return r0;
  }
  t6 = func_0058AB74(t4);
  r0 = (t6 != 30u);
  if (t6 != 30u) {
    return r0;
  }
  r0 = 0;
  return r0;
}
