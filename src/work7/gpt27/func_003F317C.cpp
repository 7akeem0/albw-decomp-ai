#include "range.h"
struct Chunk3F31 {u8 pad[0x6c];u32 count;};extern Chunk3F31*data_00716238;
extern "C" void func_003F6A8C(void*);extern "C" void func_003F6E1C(void*);
void clear(u32 z,Chunk3F31**table){(*table)->count=z;}
void func_003F317C(void*p){Chunk3F31**table=&data_00716238;void*owner=p;clear(0,table);func_003F6A8C(owner);func_003F6E1C(owner);}
