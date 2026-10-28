typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_00489AD8(unsigned a0)
{
  unsigned t1, t2, t4, t6;
  t1 = *(unsigned *)((char *)a0 + 0x10);
  if (t1 != 0) {
    t2 = t1 + (-1);
    *(unsigned *)((char *)a0 + 0x10) = t2;
    if (t2 != 0) {
      *(float *)((char *)a0 + 4) = (*(float *)((char *)a0 + 4)) - (*(float *)((char *)a0 + 0xC));
    } else {
      *(unsigned *)((char *)a0 + 4) = *(unsigned *)((char *)a0 + 8);
      *(float *)((char *)a0 + 0xC) = 0.0f;
    }
    t4 = *(unsigned *)((char *)a0 + 0x14);
    if (t4 == 0) {
      return;
    }
    t6 = *(unsigned *)((char *)*(unsigned *)((char *)t4));
    ((unsigned (*)(unsigned, unsigned, unsigned, float))t6)(t4, t4, t6, *(float *)((char *)a0 + 4));
    return;
  }
}
