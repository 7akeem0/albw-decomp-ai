#include "range.h"
inline Child1664*at(Array1664*p,const u32&n){if(n<p->count)return p->data[n];return 0;}
void f_00166488(Obj1664*p,u32 n){if(p->count){Child1664*c=at(p,p->count-1);if(c&&c->kind==n&&(c->flags.v&0x100))p->flag=1;}}
