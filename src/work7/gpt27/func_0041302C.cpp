#include "range.h"
struct Entry4130{s32 a,b;Entry4130(s32 x,s32 y):a(x),b(y){}Entry4130&operator=(const Entry4130&);};Entry4130&Entry4130::operator=(const Entry4130&o){a=o.a;b=o.b;return *this;}struct Obj4130{u8 pad[0x218];Entry4130 entries[9];};
void func_0041302C(Obj4130*p){u32 i=0;const u32&nine=9;u32 n=nine;do{p->entries[i]=Entry4130(-1,0);++i;}while(--n);}
