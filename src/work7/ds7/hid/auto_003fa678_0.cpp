void f(char* p) {
  *((unsigned char*)(p + 28)) = 0x0u;
  *((unsigned char*)(p + 29)) = 0x0u;
}
