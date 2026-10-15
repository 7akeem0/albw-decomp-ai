#include "range.h"
struct NoThrow{};void*operator new(u32,NoThrow)throw();struct Child{u8 pad[0x74];Child();};struct Owner{u8 pad[0x1c];Child*child;};extern void func_001673D0(Child*,void*,void*);void impl(Owner*p,void*b,void*a){p->child=new((NoThrow())) Child;func_001673D0(p->child,a,b);}
void f16739C(Owner*p,void*a,void*b){impl(p,b,a);}
