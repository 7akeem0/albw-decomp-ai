struct S { char pad[0x34]; unsigned m34; };
void func_0037081C(void*, const void*);
unsigned char* f(unsigned char* dst, S* src){
  func_0037081C(dst, src);
  dst[1] = (unsigned char)(src->m34 >> 31);
  dst[3] = (unsigned char)((src->m34 & 0x40000000u) >> 30);
  dst[4] = (unsigned char)((src->m34 & 0x20000000u) >> 29);
  return dst;
}
