#include "../range_types.h"
struct Flags25B7D8{u32 v;Flags25B7D8(u32 n):v(n){}void set(u32 mask){*this=Flags25B7D8(v|mask);}};
struct Fields25B7D8{void*child;Flags25B7D8 flags;};
struct Obj25B7D8{char pad[0x10];Fields25B7D8 fields;u32 reserved[2],kind;};
extern "C" void func_001E0018(void*,u32);
void update25B7D8(Obj25B7D8*p,u32 kind,u32 upper){if(upper>kind){Fields25B7D8 fields=p->fields;p->fields.flags=Flags25B7D8(fields.flags.v|2);p->kind=kind;if(fields.child)func_001E0018(fields.child,kind);}}
extern "C" void f_0025B7D8(Obj25B7D8*p,u32 kind){if(kind>0x4000001u)update25B7D8(p,kind,0x400000bu);}
