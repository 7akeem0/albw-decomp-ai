#include "range.h"
struct Resource;struct SafeString;extern const SafeString data_0070DB80,data_0070DB88;extern u32 func_00564A78(Resource*,const SafeString&);
struct Obj {u8 pad[0x7a0];Resource*resource;u8 gap[0x840-0x7a4];u32 a,b;};
void f_00281FBC(Obj*p){p->a=func_00564A78(p->resource,data_0070DB80);p->b=func_00564A78(p->resource,data_0070DB88);}
