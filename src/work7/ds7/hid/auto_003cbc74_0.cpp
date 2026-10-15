void f(char* p) {
  *((unsigned char*)(p + 0)) = 0x0u;
  *((unsigned char*)(p + 1)) = 0x0u;
  *((unsigned char*)(p + 2)) = 0x0u;
  *((unsigned char*)(p + 3)) = 0x0u;
  *((unsigned char*)(p + 4)) = 0xffu;
  *((unsigned char*)(p + 5)) = 0xffu;
  *((unsigned char*)(p + 6)) = 0xffu;
  *((unsigned char*)(p + 7)) = 0x0u;
  *((unsigned char*)(p + 8)) = 0x0u;
  *((unsigned char*)(p + 9)) = 0x0u;
  *((unsigned char*)(p + 10)) = 0xffu;
  *((unsigned char*)(p + 11)) = 0xffu;
  *((unsigned char*)(p + 12)) = 0xffu;
  *((unsigned char*)(p + 13)) = 0xffu;
  *((unsigned char*)(p + 14)) = 0xffu;
  *((unsigned char*)(p + 15)) = 0xffu;
  *((unsigned int*)(p + 16)) = 0x0u;
  *((unsigned int*)(p + 20)) = 0x0u;
  *((unsigned char*)(p + 24)) = 0x0u;
  *((unsigned int*)(p + 28)) = 0x0u;
  *((unsigned int*)(p + 32)) = 0x0u;
  *((unsigned int*)(p + 36)) = 0x0u;
  *((unsigned int*)(p + 40)) = 0x0u;
}
