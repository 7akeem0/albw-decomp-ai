#include "range.h"
struct Owner453{u8 pad[0xb0];Ctrl231 ctrl;};
extern "C" void func_001B6AFC(Owner453*);
extern "C" bool func_00532C78(void*);
bool func_00453C40(Owner453*p){func_001B6AFC(p);if(!func_00532C78(&p->ctrl)&&!func_00532C78((u8*)p+0x20))return true;return false;}
