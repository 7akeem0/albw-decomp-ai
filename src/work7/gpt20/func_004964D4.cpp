#include "ladder_types.h"
// operator new = 0010CF28; Owner4964 constructor = 0049A188.
void* operator new(unsigned int,void*,s32) throw();
struct Owner4964{char bytes[0x394];Owner4964();};
Owner4964* f_004964D4(void*,void* heap){return new(heap,4)Owner4964;}
