#include "range.h"
struct S{u8 pad[0x9d3];u8 state;};
bool target(S*p){u8 a=p->state;if(a==2){p->state=3;return false;}if(a==3)return false;return true;}