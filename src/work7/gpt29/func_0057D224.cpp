#include "range.h"
struct S57D{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual bool target();char pad4[0x48];u8 enabled;};
bool f_0057D224(S57D*p){if(!p->enabled)return false;return p->target();}
