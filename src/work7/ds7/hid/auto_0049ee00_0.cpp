void f(char* p) {
  *((unsigned char*)(p + 0)) = 0xffu;
  *((unsigned char*)(p + 1)) = 0x0u;
  *((unsigned char*)(p + 2)) = 0x0u;
  *((unsigned char*)(p + 3)) = 0x0u;
}
