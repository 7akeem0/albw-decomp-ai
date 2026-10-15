typedef unsigned char u8;
typedef unsigned int u32;

extern u8 ro_006F4F20[];
extern u8 ro_006F67AC[];
extern u8 data_00715164[];
extern u32 data_00715168;
extern u32 data_0071516C;
extern u8 bss_007A9860[];
extern void func_001150B8(void*, void*);

void* func_00494058(void* self) {
  *(void**)self = ro_006F4F20;
  *(u8*)((char*)self + 4) = 1;
  *(u8*)((char*)self + 5) = 1;
  *(u8*)((char*)self + 0x88) = *data_00715164;
  *(u32*)((char*)self + 0x8c) = data_00715168;
  *(u32*)((char*)self + 0x90) = data_0071516C;
  *(void**)self = ro_006F67AC;
  func_001150B8((char*)self + 0x94, bss_007A9860);
  *(u8*)((char*)self + 4) = 1;
  return self;
}
