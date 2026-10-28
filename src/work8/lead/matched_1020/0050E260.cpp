
typedef unsigned int u32;
extern unsigned func_0050EEEC(unsigned, unsigned, unsigned);
extern unsigned func_0050E674(unsigned);
extern unsigned func_0050E868(unsigned, unsigned);
unsigned func_0050E260(unsigned a0, unsigned a1)
{
  int mode = *(short *)((char *)a0 + 0x2E);
  switch (mode) {
  case 0:
    return func_0050E674(a0);
  case 1:
    return func_0050E868(a0, a1);
  case 2:
    return func_0050EEEC(a0, a1, mode);
  default:
    return 1;
  }
}
