void f(char* p) {
  *((unsigned int*)(p + 0)) = 0x0u;
  *((unsigned int*)(p + 4)) = 0x0u;
  *((unsigned int*)(p + 8)) = 0x0u;
  *((unsigned int*)(p + 12)) = 0x0u;
  *((unsigned int*)(p + 16)) = 0x0u;
}
