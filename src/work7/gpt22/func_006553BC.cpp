#include "range.h"
struct Primary{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();u8 pad[0x31c];};
struct Secondary{virtual void v();};struct Base:Primary,Secondary{u8 pad[0x8f0-0x324];Base(void*,s32,void*);};
struct StateBase{u8 pad[0x14];StateBase();};struct State:StateBase{u32 a,b,c,d;State():StateBase(),a(0),b(0),c(0),d(0){}};
struct D:Base{State state;u8 mode,flagA,flagB;D(void*,s32,void*);};D::D(void*a,s32 b,void*c):Base(a,b,c),state(),mode(6),flagA(0),flagB(0){}
// Base00219968, StateBase0010A794.
