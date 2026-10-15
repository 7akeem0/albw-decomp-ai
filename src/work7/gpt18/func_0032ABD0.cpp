#include "range.h"
struct Count{u32 v;void step(){if(v)--v;}};struct O{char p0[0x994];Count first;char p998[0xa6c-0x998];Count second;};void f(O*p,u32 n){if(n<3)p->first.step();else p->second.step();}
