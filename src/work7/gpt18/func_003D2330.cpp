#include "range.h"
struct C{virtual void call(void*,u32);};struct G{u32 unk;C*child;};extern G data_00715894;void f(void*p,u32 n){if(data_00715894.child)data_00715894.child->call(p,n);}
