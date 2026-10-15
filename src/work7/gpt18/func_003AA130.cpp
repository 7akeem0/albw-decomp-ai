typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Inner_003AA130{char pad[36];void* child;};struct Global_003AA130{char pad[300];Inner_003AA130* inner;};extern Global_003AA130* data_007142C8;extern void func_0047DD30(void*);void f_003AA130(){func_0047DD30(data_007142C8->inner->child);}
