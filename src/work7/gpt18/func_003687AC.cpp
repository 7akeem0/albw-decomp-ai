#include "range.h"
struct Obj3687 {char pad[0x38];void* child;};
extern void func_005452D4(void*);
void func_003687AC(Obj3687* p){if(p->child)func_005452D4((char*)p->child+0x114);}
