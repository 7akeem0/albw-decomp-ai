#include "range.h"
extern char* data_007124F0;
extern u32 func_00111A64(void*);
u32 randomBelow58A(void* random,u32 bound){return((unsigned long long)func_00111A64(random)*bound)>>32;}
bool f_0058A474(void*,u32 chance){return randomBelow58A(data_007124F0+0x660,100)<chance;}
