#include "ladder_types.h"
struct Object523A {char pad[0x35];u8 m35;};
bool func_00523ABC(const Object523A* p,u32 i) {if(p->m35&(1u<<i))return true;return false;}
