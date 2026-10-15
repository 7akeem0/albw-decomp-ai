#include "range.h"
struct Owner4DAFC {u8 data[0x12C];void* child;};
extern "C" void sub_004490C4(void*,u32);
extern "C" void sub_00448700(void*);
extern "C" void f_0044DAFC(Owner4DAFC*s,u32 mode){if(s->child){sub_004490C4(s->child,1);if(mode!=10)sub_00448700(s->child);}}
