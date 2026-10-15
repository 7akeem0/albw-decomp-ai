#include "range.h"
__svc(0x23) u32 closeHandle(u32);
struct H93A {u32 handle;~H93A(){if(handle){closeHandle(handle);handle=0;}}};
struct O93A {u32 a;H93A child;~O93A();};
O93A::~O93A(){}
