typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Inner_003AA080{char pad[36];void* child;};struct Global_003AA080{char pad[300];Inner_003AA080* inner;};extern Global_003AA080* data_007142C8;extern void func_0012C718(void*);void f_003AA080(){func_0012C718(data_007142C8->inner->child);}
