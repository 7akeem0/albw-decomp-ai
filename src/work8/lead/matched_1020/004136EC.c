static __inline unsigned l2c_fbits(float x) { union { float f; unsigned u; } v; v.f=x; return v.u; }
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

float func_004136EC(unsigned a0, float fa0)
{
  return (int)(l2c_fbits(fa0)) < 0x3F000000 ? 0.0f : 1.0f;
}
