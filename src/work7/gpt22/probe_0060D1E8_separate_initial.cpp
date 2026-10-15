#include "range.h"
struct Primary{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();virtual void v40();virtual void v41();virtual void v42();virtual void v43();u8 pad[0x31c];};
struct Secondary{virtual void v();};
struct Base:Primary,Secondary{u8 pad[0x960-0x324];Base(void*,s32,void*);};
struct StateBase{u8 pad[0x14];StateBase();};
struct Ptr{void*value;Ptr(void*p):value(p){}};
struct State:StateBase{u32 a,b,c,d;State():StateBase(),a(0),b(0),c(0),d(0){}};
struct D:Base{State state;s32 initial;D(void*,s32,s32,void*);};
D::D(void*a,s32 init,s32 mode,void*arg):Base(a,mode,arg),state(),initial(init){}
// Base004C18E0, StateBase0010A794, vtable006C9C9C.
