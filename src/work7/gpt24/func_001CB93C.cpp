#include "range.h"
struct Obj1CB924{char pad[0x7a0];void*res;char pad7a4[0x840-0x7a4];u32 handle,status;};
extern u32 func_00564A78(void*,const SafeString24&);
extern "C" void target(Obj1CB924*p){p->handle=func_00564A78(p->res,SafeString24("Head"));p->status=1;}
