inline void setFlag(char*p,const int& v){*((signed char*)(p+6))=v;}
void f(char* p) {
  *((unsigned int*)(p + 0)) = 0x0u;
  *((unsigned int*)(p + 4)) = 0x0u;
  *((unsigned int*)(p + 8)) = 0x0u;
  *((unsigned int*)(p + 12)) = 0x0u;
  *((unsigned int*)(p + 16)) = 0x0u;
  *((unsigned int*)(p + 20)) = 0x0u;
  *((unsigned int*)(p + 24)) = 0x0u;
  *((unsigned int*)(p + 28)) = 0x0u;
  *((unsigned int*)(p + 32)) = 0x0u;
  *((unsigned int*)(p + 36)) = 0x0u;
  *((unsigned int*)(p + 40)) = 0x0u;
  *((unsigned int*)(p + 44)) = 0x0u;
  *((unsigned int*)(p + 48)) = 0x0u;
  *((unsigned int*)(p + 52)) = 0x0u;
  *((unsigned int*)(p + 56)) = 0x0u;
  *((unsigned int*)(p + 60)) = 0x0u;
  setFlag(p,-1);
  *((unsigned char*)(p + 12)) = 0x1u;
  *((unsigned char*)(p + 13)) = 0x1u;
  *((unsigned char*)(p + 14)) = 0x0u;
  *((unsigned char*)(p + 15)) = 0x0u;
}
