#include "../range_types.h"
struct Obj2E011C{unsigned long long initial;u32 cookie;Obj2E011C();void setCookie(u32);};
extern void*data_0070C8E0;
extern "C" void func_004AD590(void*,Obj2E011C*);
Obj2E011C::Obj2E011C():initial(0xffffffffULL){setCookie(0);func_004AD590(data_0070C8E0,this);}
void Obj2E011C::setCookie(u32 n){cookie=n;}
