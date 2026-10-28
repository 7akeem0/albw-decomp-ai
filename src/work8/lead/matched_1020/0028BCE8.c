typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00231448(unsigned);
extern void func_002317C0(unsigned, float, unsigned, unsigned, unsigned);
extern float func_00532B54(unsigned);
extern void func_00231488(unsigned, float);
void func_0028BCE8(unsigned a0)
{
  unsigned h901, h902, t1, t4, t10;
  t1 = *(short *)((char *)a0 + 0x62);
  if (t1 != 0) {
    if (t1 == 1) {
      return;
    }
    func_00231448(a0 + 0x60);
    t10 = *(unsigned *)((char *)a0 + 0x1C);
    *(unsigned *)((char *)a0 + 0x68) = t10;
    *(unsigned short *)((char *)a0 + 0x62) = 0;
    h901 = a0;
    h902 = h901 + 0x60;
    *(unsigned short *)((char *)h902) = 2;
    func_002317C0(a0 + 0x60, 1.0f, 0, 2, t10);
    return;
  }
  t4 = ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x54))(a0);
  if ((t4 != 0) && (*(unsigned short *)((char *)a0 + 0x60) & 0xFF) != 2) {
    func_00231488(a0 + 0x60, -(func_00532B54(a0 + 0x60)));
    return;
  }
}
