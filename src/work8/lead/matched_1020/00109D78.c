typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006D68A0[];
extern unsigned func_0010C4E4(unsigned);
extern unsigned func_0010C864(unsigned, unsigned, float);
unsigned func_00109D78(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned t1, t3, t4, kt2;
  t1 = func_0010C4E4(a0);
  *(unsigned *)((char *)t1) = (unsigned)ro_006D68A0;
  *(unsigned *)((char *)t1 + 0x14) = a1;
  *(unsigned *)((char *)t1 + 0x18) = a2;
  *(float *)((char *)t1 + 0x1C) = 0.0f;
  *(float *)((char *)t1 + 0x20) = 0.2964133322238922f;
  *(float *)((char *)t1 + 0x24) = 0.2964133322238922f;
  kt2 = (unsigned)ro_006D68A0;
  t3 = func_0010C864(t1 + 0x28, kt2, 1.0f);
  t4 = t3 + (-40);
  *(float *)((char *)t4 + 0x40) = 0.0f;
  *(float *)((char *)t4 + 0x44) = 0.0f;
  *(unsigned char *)((char *)t4 + 0x48) = 1;
  return t4;
}
