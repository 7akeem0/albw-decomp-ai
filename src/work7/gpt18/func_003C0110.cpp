#include "range.h"
struct Msg3C01 {char pad[0x20];u16 value;};
bool func_003C0110(void*,const Msg3C01* a){return (a->value&0x7e0)!=0x220;}
