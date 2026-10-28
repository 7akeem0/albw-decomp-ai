typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

float func_0056D4D0(unsigned a0)
{
  unsigned t1, t2;
  float s0, x1;
  t1 = *(unsigned *)((char *)a0 + 0x10);
  t2 = *(unsigned *)((char *)a0 + 0xC);
  x1 = *(float *)((char *)a0 + 8);
  s0 = x1;
  if ((int)t1 < (int)t2) {
    s0 = (((x1 - (*(float *)((char *)a0 + 4))) * ((float)(int)t1)) / ((float)(int)t2)) + (*(float *)((char *)a0 + 4));
  }
  return s0;
}
