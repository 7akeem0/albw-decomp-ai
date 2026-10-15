#include "ladder_types.h"
struct Object4C6D {char pad[0x51c];u32 m51c;};
extern u32 func_00527E00(Object4C6D*);
void func_004C6D68(Object4C6D* p) {p->m51c=func_00527E00(p);}
