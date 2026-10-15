#include "range.h"
struct Request548 { char data[0x40]; Request548(const char*); };
extern s32 func_005583F8(Request548*);
s32 f_00548798(const char* text) { Request548 request(text);return func_005583F8(&request); }
