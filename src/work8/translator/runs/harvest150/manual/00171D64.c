extern char data_007142C8[];
extern void func_0051B888(unsigned, unsigned);
void func_00171D64(unsigned a0, unsigned a1)
{
  unsigned g;
  if (a1 != 0) {
    return;
  }
  g = *(unsigned *)((char *)data_007142C8);
  if (*(unsigned char *)((char *)a0 + 0x70)) func_0051B888(g, 2); else func_0051B888(g, 2);
}
