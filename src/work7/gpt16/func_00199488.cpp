#include "range.h"
struct Ctrl199{s16 a,b;u32 frame;void*owner;void init(void*,s16,s16);};struct O199{u8 pad[0x1c];void*child;u8 pad20[0x24];Ctrl199 ctrl;};extern void func_002317C0(void*,float);void Ctrl199::init(void*o,s16 b,s16 a){owner=o;this->b=b;this->a=a;}
void f199488(O199*p){p->ctrl.init(p->child,1,0);func_002317C0(&p->ctrl,1.0f);}
