#include "range.h"
struct OutputPair433 {u32* dest;u32 first;};
struct Obj433 {u8 pad[0xb4];OutputPair433 pair;u32 second,third,fourth;};
void func_004331CC(Obj433* p){OutputPair433 a=p->pair;a.dest[0]=a.first;a.dest[1]=p->second;a.dest[2]=p->third;a.dest[3]=p->fourth;}
