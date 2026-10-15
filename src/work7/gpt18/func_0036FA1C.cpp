#include "range.h"
struct G{u32 word,value;};extern G data_00708920;struct O{Vec3 value;u32 word;u8 a,b;u16 reserved;u8 c,d;};void f(O*p,u8 n){p->value.x=0.f;p->value.y=0.f;p->value.z=0.f;p->word=data_00708920.value;p->a=0;p->b=0;p->c=0;p->d=n;}
