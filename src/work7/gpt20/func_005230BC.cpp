#include "ladder_types.h"
struct Child5230{virtual void a();virtual void b();virtual void c();virtual void run(u32,u32,u32);};
struct O5230{char pad[0x3d0];Child5230* child;};
bool f_005230BC(O5230* p,u32 a,u32 b,u32 c){if(p->child){p->child->run(a,b,c);return true;}else return false;}
