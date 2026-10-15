#include "range.h"
struct Chunk{u8 pad[0x6c];u32 a;void clear(u32 n){a=n;}};extern Chunk* data_00716238;extern void func_003F6A8C(void*);extern void func_003F6A20();
void func_003F1A5C(void*p){const u32&z=0;data_00716238->a=z;func_003F6A8C(p);func_003F6A20();}
