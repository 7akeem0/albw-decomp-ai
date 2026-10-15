#include "range.h"
struct S{u8 data[0x48];~S();};extern "C" void func_0067FFC8(S*,void*,void*,void*);
void target(const S*p,void*a,void*b,void*c){S temp=*p;func_0067FFC8(&temp,a,b,c);}
// S destructor is linker-inlined NOP at00691490, next function0069149C.
