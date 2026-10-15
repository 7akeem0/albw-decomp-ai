void f(char* p) {
  *((unsigned int*)(p + 0)) = 0x0u;
  *((unsigned char*)(p + 4)) = 0x0u;
}
