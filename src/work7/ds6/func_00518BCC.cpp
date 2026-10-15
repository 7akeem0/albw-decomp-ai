typedef unsigned int u32;

extern u32* data_0070B960;
extern u32* data_00709DF8;
extern u32* data_007125B0;
extern u32* data_00712468;

extern void func_004EFCE8(void*);
extern void func_001E252C(void*);
extern void func_0014AC1C(void*);
extern void func_0014A998(void*, int);

void func_00518BCC() {
  *(u32*)((char*)data_0070B960 + 0x1870) = 0;
  func_004EFCE8((void*)data_00709DF8);
  func_001E252C((void*)data_007125B0);
  func_0014AC1C((void*)data_00712468);
  func_0014A998((void*)data_00712468, 1);
}
