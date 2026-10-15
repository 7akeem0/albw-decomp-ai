#include "ladder_types.h"
struct Req4EFA {s8 kind;u8 pad1[3];u32 a,b;};
struct O4EFA {char pad0[0x3c];Req4EFA request;};
extern void*data_0070C8E0;
extern void func_004AB708(void*);
extern bool func_004EF418(O4EFA*,const Req4EFA&,u32,bool);
bool target(O4EFA*p,u32 mode){func_004AB708(data_0070C8E0);return func_004EF418(p,p->request,mode,false);}
