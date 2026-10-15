#include "ladder_types.h"
struct Base49F3 {Base49F3();virtual void run();char pad4[0xc];};
struct Member49F3 {Member49F3();char data[0x1c];};
struct Object49F3:Base49F3 {u32 a,b;Member49F3 member;u32 c;Object49F3();};
Object49F3::Object49F3():a(0),b(0),member(),c(0){}
