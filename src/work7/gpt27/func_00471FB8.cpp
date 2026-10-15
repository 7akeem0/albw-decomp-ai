#include "range.h"
extern u32 func_001B6CE4(void*);extern s32 func_00532C78(void*);
struct Obj471F {u8 pad[0xc8];Ctrl231 ctrl;};
u32 func_00471FB8(Obj471F* p){u32 r=func_001B6CE4(p);if(func_00532C78(&p->ctrl)!=0)r=0;return r;}
