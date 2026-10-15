#include "range.h"
struct C{virtual void v0();virtual void release(void*);};struct G{u32 unk;C*child;};extern G data_00715894;void f(void*p){if(p&&data_00715894.child)data_00715894.child->release(p);}
