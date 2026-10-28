typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char ro_006F7A30[];
extern unsigned func_0048D088(unsigned, unsigned, unsigned);
extern unsigned func_0010BAB4(unsigned, unsigned);
__forceinline void setText(unsigned* obj, const char* text) { obj[1] = (unsigned)text; }

unsigned func_004A08BC(unsigned a0, unsigned a1)
{
  unsigned r5, t1, t2;
  t1 = func_0048D088(a0, a1, (unsigned)"AudioTask");
  *(unsigned *)((char *)t1) = (unsigned)ro_006F7A30;
  *(unsigned char *)((char *)t1 + 0xBC) = 0;
  *(unsigned *)((char *)t1 + 0xC0) = 0;
  t2 = func_0010BAB4(8, r5);
  if (t2 == 0) goto L2;
  *(unsigned *)t2 = (unsigned)ro_006F5988;
  setText((unsigned*)t2, "");
L2:;
  *(unsigned *)((char *)t1 + 0xC0) = t2;
  return t1;
}
