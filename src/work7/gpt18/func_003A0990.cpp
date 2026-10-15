#include "range.h"
struct E{void reset();char pad[0x88];};struct O{char pad[0x54];E elements[6];void reset(int n){E*a=elements;for(int i=0;i!=n;i++)a[i].reset();}};void f(O*p){p->reset(6);}
