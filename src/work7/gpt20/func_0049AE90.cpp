#include "ladder_types.h"
// operator new = 0010CF28; Owner49AE constructor = 0049546C.
void* operator new(unsigned int,void*,s32) throw();
struct Owner49AE{char bytes[0x4d4];Owner49AE();};
Owner49AE* f_0049AE90(void*,void* heap){return new(heap,4)Owner49AE;}
