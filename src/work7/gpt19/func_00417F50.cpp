#include "range.h"
struct Owner17F50 {u32 word;RangeNode19 root;};
struct Item17F50 {u8 data[0x1A8];RangeNode19 node;};
extern "C" void sub_00111EF0(RangeNode19*,RangeNode19*);
extern "C" void sub_0041D5C0(Item17F50*);
extern "C" void sub_0041D830(Owner17F50*,Item17F50*);
extern "C" void f_00417F50(Owner17F50*s,Item17F50*i){RangeNode19*r=&s->root;sub_00111EF0(r,&i->node);if(i){sub_0041D5C0(i);sub_0041D830(s,i);}}
