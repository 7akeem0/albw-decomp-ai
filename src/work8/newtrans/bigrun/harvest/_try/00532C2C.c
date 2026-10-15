typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_00532C2C(unsigned a0)
{
  unsigned h901, t1, t2, t3, t4;
  float s0;
  t1 = *(unsigned *)((char *)a0 + 8);
  if (t1 != 0) {
    t2 = *(short *)((char *)a0 + 2);
    if ((int)t2 >= 0) {
      h901 = t1 + 8;
      t3 = *(unsigned *)((char *)h901);
      t4 = t1;
      if (t3 > t2) {
        t4 = *(unsigned *)((char *)t1 + 0xC);
      }
      s0 = *(float *)((char *)(t3 > t2 ? (t4 + (((t2 << 3) - t2) << 3)) : *(unsigned *)((char *)t4 + 0xC)) + 0x14);
      goto L4;
    }
  }
  s0 = 0.0f;
  L4:;
  return (unsigned)(int)s0;
}
