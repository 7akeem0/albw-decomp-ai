#include "range.h"
struct Slot {char pad[0x7c];u32 field;};extern Slot* data_00716238;extern void func_003F6E1C(void*);
void f_003F165C(void* p){Slot*& stack=data_00716238;Slot* slot=stack;slot->field=0;stack=slot+1;func_003F6E1C(p);}
