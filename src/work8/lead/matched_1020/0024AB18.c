typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_0024ADF4(unsigned, unsigned, float, float);
extern void func_0014FAFC(unsigned, unsigned, float);
void func_0024AB18(unsigned a0)
{
  unsigned t1, t2;
  func_0024ADF4(a0, 0, 0.0f, 1.0f);
  t1 = *(unsigned *)((char *)a0 + 0x24);
  t2 = t1 + (-2147483647-1);
  *(unsigned *)((char *)a0 + 0x3E8) = t2;
  func_0014FAFC(a0, t2, 0.09000000357627869f);
  *(unsigned *)((char *)a0 + 0x448) = 0;
  return;
}
