#include "range.h"
struct M {u32 v;};
struct S {char pad[0x134];M sub;};
M* f_0048DB9C(S* p,int i){if(i==0||i==1)return &p->sub;return 0;}
