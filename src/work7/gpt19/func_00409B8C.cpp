#include "range.h"
struct Owner9B8C;
struct Link9B8C {Owner9B8C*owner;};
struct Owner9B8C {u8 data[0x29E0];Link9B8C*link;};
extern "C" void f_00409B8C(Link9B8C*s){if(s->owner){if(s->owner->link==s)s->owner->link=0;if(s->owner)s->owner=0;}}
