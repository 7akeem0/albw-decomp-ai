#include "range.h"
extern bool func_00547538(void*);extern bool func_00547B20(void*);
inline bool phase(Obj1C0*p,bool first,u8 on){if(first||!func_00547B20(p->sub)){p->m2d7=on;return true;}return false;}
bool f_001E6AF8(Obj1C0*p){return phase(p,func_00547538(p->sub),1);}
