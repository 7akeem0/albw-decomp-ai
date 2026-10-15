#include "range.h"
extern "C" void func_003E0AF0(void*);
struct Buffers414 {void*ptrs[2];~Buffers414();};
Buffers414::~Buffers414(){for(s32 i=0;i<2;++i)if(ptrs[i])func_003E0AF0(ptrs[i]);}
