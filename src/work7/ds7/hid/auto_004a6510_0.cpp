void f(char* p) {
  *((unsigned int*)(p + 4)) = 0xffffffffu;
  *((unsigned int*)(p + 0)) = 0x0u;
  *((unsigned int*)(p + 8)) = 0xffffffffu;
}
