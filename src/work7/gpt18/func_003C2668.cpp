#include "range.h"
struct F{u32 v;F(){}F(u32 x):v(x){}void change(u32 m,bool on){if(on)v|=m;else v&=~m;}void set(u32 m){change(m,true);}};struct Sub{u32 v;void func_003C2680();};struct O{char pad[0x59c];F flags;char gap[0x340];Sub sub;};void func_003C2668(O*p){p->flags.set(12);p->flags.set(128);p->sub.func_003C2680();}
