void f(char* p) {
  *((unsigned short*)(p + 0)) = 0x0u;
  *((unsigned short*)(p + 2)) = 0x0u;
}
