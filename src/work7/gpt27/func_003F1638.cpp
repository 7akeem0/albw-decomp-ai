#include "range.h"
struct Chunk {u8 pad[0x6c];u32 a;u8 pad70[0xc];u32 b;};
extern Chunk* data_00716238;extern void func_003F6A20();
void func_003F1638(){Chunk* p=data_00716238;p->a=0;p->b=0;data_00716238=(Chunk*)((u8*)p+0x80);func_003F6A20();}
