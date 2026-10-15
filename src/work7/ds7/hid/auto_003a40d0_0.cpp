void f(char* p) {
  *((unsigned int*)(p + 48)) = 0x0u;
  *((unsigned char*)(p + 52)) = 0x0u;
  *((unsigned char*)(p + 54)) = 0x0u;
}
