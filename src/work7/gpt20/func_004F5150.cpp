#include "ladder_types.h"
struct O4F51{char pad[0x508];s16 value;};
void f_004F5150(O4F51* p,s32 n){p->value=(s16)(p->value-n);if(p->value < -64)p->value=-64;}
