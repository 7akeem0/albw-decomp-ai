#include "../../range.h"
extern "C" void func_00104198(); extern "C" void func_001041E4(); extern "C" void func_00106314(); extern "C" void func_00106320(void*); extern "C" void func_0010998C();
struct S {void(*done)(u32);void(*run)(u32,u32);u32 first,second;void* optional;};
extern "C" void func_0010994C(S*p){func_00104198();func_001041E4();func_00106314();p->run(p->first,p->second);p->done(p->second);if(p->optional)func_00106320(p->optional);func_0010998C();}
