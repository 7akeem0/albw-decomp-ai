#include "ladder_types.h"
struct O48FA;
struct Callback48FA {virtual void invoke(O48FA*,u32);};
struct O48FA {char pad0[0x8c];Callback48FA* callback;};
void f_0048FA94(O48FA* p,u32 a){p->callback->invoke(p,a);}
