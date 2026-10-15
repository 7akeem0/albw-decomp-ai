#include "ladder_types.h"
struct O49B9 {char pad0[0x6c];char first[0x50];char second[4];};
extern "C" void* func_0049B928(O49B9*p,u32 kind){switch(kind){case 0:case 1:return p->first;case 2:case 3:case 4:return p->second;default:return 0;}}
