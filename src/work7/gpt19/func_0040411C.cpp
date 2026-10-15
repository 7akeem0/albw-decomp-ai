#include "range.h"
struct V {virtual void v0();virtual void v1();virtual void v2();virtual void apply(void*);};
struct Global {V* first;V* second;};extern Global data_00714C80;
void f_0040411C(void* p){data_00714C80.first->apply(p);}
