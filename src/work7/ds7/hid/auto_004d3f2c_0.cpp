void f(char* p) {
  *((unsigned char*)(p + 0)) = 0x0u;
  *((unsigned int*)(p + 4)) = 0x0u;
  *((unsigned int*)(p + 8)) = 0x0u;
  *((unsigned int*)(p + 12)) = 0x0u;
  *((unsigned int*)(p + 16)) = 0x0u;
  *((unsigned short*)(p + 20)) = 0x0u;
  *((unsigned char*)(p + 22)) = 0x1u;
  *((unsigned int*)(p + 24)) = 0x0u;
}
