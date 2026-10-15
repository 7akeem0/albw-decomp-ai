#include "range.h"
struct C{char pad[0x58];f32 a,reserved,b,c;void set(f32 n,f32 scale){c=n;b=n*scale;a=n*scale;}};struct O{char pad[0x430];C*child;char gap[0x448-0x434];f32 value;u32 reserved,zero;};void f(O*p){p->zero=0;p->child->set(p->value*.1f,2.f);}
