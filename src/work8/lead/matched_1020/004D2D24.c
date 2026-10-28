extern unsigned func_00521004(unsigned);
extern unsigned func_004CF478(unsigned, unsigned, unsigned);
extern void func_004CEAF0(unsigned);
void func_004D2D24(unsigned a0, unsigned a1)
{
  unsigned t1;
  t1 = *(unsigned *)((char *)a0 + 0x538);
  *(unsigned char *)((char *)t1 + 0x44) = (a1 != 0 && func_00521004(a0) != 0);
  func_004CF478(*(unsigned *)((char *)a0 + 0x530), a1, 0);
  func_004CEAF0(*(unsigned *)((char *)a0 + 0x530));
}
