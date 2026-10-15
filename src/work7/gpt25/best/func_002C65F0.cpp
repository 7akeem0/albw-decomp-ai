#include "../range_types.h"
struct Timer2C65 {u32 current,count;f32 rate;void start(u32 n,u32 c=0){count=n;if(n)rate=1.0f/n;else rate=0.f;current=c;} };
struct Obj2C65 {char pad[0x4e4];Timer2C65 timer;};
extern "C" void f_002C65F0(Obj2C65*p){p->timer.start(30);}
