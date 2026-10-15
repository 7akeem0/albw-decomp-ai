#include "ladder_types.h"
struct O4A51{char pad[0x20];u32 ctrl;};
extern void func_0023251C(O4A51*);
extern bool func_00532C78(u32*);
extern void func_00231340(u32*);
void f_004A51D0(O4A51*p){func_0023251C(p);if(func_00532C78(&p->ctrl))func_00231340(&p->ctrl);}
