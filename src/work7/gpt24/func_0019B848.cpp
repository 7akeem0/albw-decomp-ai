#include "range.h"
struct Obj19B824{char pad[0x344];void*effect;};
struct EffRet8_24{u32 pointer,id;};
extern float func_00521298(Obj19B824*);
extern EffRet8_24 func_004A1B9C(void*,const char*);
extern "C" void target(Obj19B824*p){if(func_00521298(p)<1.f){void*e=p->effect;const char*n="Come";if(e)func_004A1B9C(e,n);}}
