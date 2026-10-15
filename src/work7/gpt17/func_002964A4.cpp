#include "range.h"
struct C2964 {u8 pad[0x84];u8 flag;void set(u8 v){flag=v;}};
struct T2964 {void func_002964B8(s32);};
struct O2964 {u8 pad[0x40];C2964* child;u8 gap[8];T2964* tail;};
void f_2964A4(O2964* p,s32 n){p->child->set(0);p->tail->func_002964B8(n);}
