#include "ladder_types.h"
struct Tick49AD {u32 lo,hi;};
__svc(0x28) __value_in_regs Tick49AD getTick49AD();
struct O49AD {
virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void update();
char pad4[0x9c];u32 value;char padA4[0xc];Tick49AD first,second;
};
extern "C" u32 func_005FF6E4(u32);
extern "C" __declspec(noreturn) void func_0049AD58(O49AD*p){
    p->value=func_005FF6E4(0x402);p->first=getTick49AD();p->second=getTick49AD();
    for(;;)p->update();
}
