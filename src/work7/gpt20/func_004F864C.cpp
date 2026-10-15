#include "ladder_types.h"
struct Object4F86 {char pad[0x780];u8 m780;};
extern void func_004F8660(Object4F86*,int,int,int);
void func_004F864C(Object4F86* p,u8 v) {p->m780=v;func_004F8660(p,0,0,1);}

