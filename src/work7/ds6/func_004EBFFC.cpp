typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

extern void func_00320E80(void*, u32, void*, f32);

void func_004EBFFC(void* self, void* a1, f32 f) {
  func_00320E80(*(void**)((char*)self + 0x24), 0x4000004u, a1, f);
  func_00320E80(*(void**)((char*)self + 0x24), 0x4000008u, a1, f);
  func_00320E80(*(void**)((char*)self + 0x24), 0x4000009u, a1, f);
  func_00320E80(*(void**)((char*)self + 0x24), 0x400000au, a1, f);
}
