static __inline unsigned l2c_fbits(float x) { union { float f; unsigned u; } v; v.f=x; return v.u; }
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0018C300(unsigned a0, unsigned a1)
{
  unsigned k1, t1, t2, t3, t4, t5, t6;
  float x1, x2;
  *(unsigned char *)((char *)a0 + 0x4F1) = 1;
  t1 = *(unsigned short *)((char *)a1 + 0x20);
  t2 = t1 & 0x1F;
  t3 = 1 << t2;
  if ((t3 & 0x18) != 0) {
    x1 = *(float *)((char *)a1 + 8);
    k1 = 0x3F733333;
    x2 = x1 > 0.0f ? x1 : -x1;
    t4 = l2c_fbits(x2);
    if ((int)t4 < (int)k1) {
      *(unsigned char *)((char *)a0 + 0x4F1) = 0;
    }
  }
  t5 = *(unsigned short *)((char *)a1 + 0x20);
  t6 = t5 & 0x7E0;
  if (t6 == 384u) {
    *(unsigned char *)((char *)a0 + 0x4F1) = 0;
  }
  return 0;
}
