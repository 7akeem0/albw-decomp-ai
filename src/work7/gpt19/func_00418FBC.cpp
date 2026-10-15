#include "range.h"
struct Child18FBC {u8 data[0x130];u8 enabled,active;u8 gap[0x1A0-0x132];void*target;};
struct Owner18FBC {u8 data[0xE];bool enabled;u8 gap[0x9C-0xF];Child18FBC*child;};
extern "C" void sub_00414BD8(void*,bool);
extern "C" void f_00418FBC(Owner18FBC*s,bool on){s->enabled=on;Child18FBC*c=s->child;if(c&&c->active&&bool(c->enabled)!=on){c->enabled=on;sub_00414BD8(c->target,on);}}
