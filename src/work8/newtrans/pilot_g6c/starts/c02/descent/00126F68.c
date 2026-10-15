static __inline unsigned l2c_fbits(float x) { union { float f; unsigned u; } v; v.f=x; return v.u; }
static __inline float l2c_ibits(unsigned x) { union { float f; unsigned u; } v; v.u=x; return v.f; }
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_00111A64(unsigned);
extern unsigned func_0058A7D4(unsigned);
float func_00126F68(unsigned a0)
{
  unsigned t2;
  float x1;
  func_004FABDC(a0, 1, 0, 0);
  t2 = a0 + 0x800;
  *(unsigned *)((char *)a0 + 0x3E8) = *(unsigned *)((char *)a0 + 0x8E0);
  x1 = l2c_ibits(func_00111A64(func_0058A7D4(a0)));
  *(float *)((char *)t2 + 0xE4) = 0.10000000149011612f + ((((float)(l2c_fbits(x1))) * 2.3283064365386963e-10f) * 0.10000000149011612f);
  *(unsigned char *)((char *)a0 + 0x8ED) = 0;
  return 0.10000000149011612f;
}
