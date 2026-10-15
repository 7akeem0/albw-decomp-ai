#include "range.h"
struct Part {u8 pad[0x1600];u8 active;u8 tail[3];void set(u8 n){active=n;}void late(u8);};
struct Obj {Part parts[3];};
struct Counter {u32 v;Counter(u32 n):v(n){}operator u32()const{return v;}Counter&operator++(){++v;return*this;}};
void f_0029383C(Obj*p){for(Counter i(0);i<3;++i)p->parts[i].set(1);}
