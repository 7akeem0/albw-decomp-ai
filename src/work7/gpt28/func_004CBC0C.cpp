#include "range.h"
extern bool func_004F4A68(void*,const PackedArg20*);
struct Kind{u32 v;};Kind kind(u16 p){Kind k={p&31};return k;}bool f_004CBC0C(void*o,const PackedArg20*a){u16 p=a->packed;if(kind(p).v==6&&(p&0x7e0)==0x1e0)return false;return func_004F4A68(o,a);}
