#include "range.h"
extern u32 func_0056CAB8(const char*);
inline u32 align4(u32 n) { return (n+3)&~3u; }
u32 f_00569D68(void*,const char* text) { return align4(4+func_0056CAB8(text)*4); }
