extern unsigned func_002B83E4(unsigned, unsigned);
unsigned func_003B2794(unsigned a0, unsigned a1)
{
  int t1;
  if (a1 == 0) {
    return 0;
  }
  t1 = *(signed char *)((char *)a1 + 0x500);
  if (t1 != 0 && t1 != 4) {
    return 0;
  }
  if (*(unsigned char *)((char *)a1 + 0x4F1) != 0) {
    return 0;
  }
  return func_002B83E4(*(unsigned *)((char *)a0 + 0x48), a1) == 0;
}
