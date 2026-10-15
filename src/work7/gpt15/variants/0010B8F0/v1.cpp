#include "../../range.h"
struct Config{u32 limit;f32 a,b;u8 flag;Config():limit(250),a(.4f),b(.5f),flag(0){}};struct Base_0010C8F8{virtual void v();Base_0010C8F8();Base_0010C8F8(void*,u32);};struct S:Config,Base_0010C8F8{S(void*);};S::S(void*arg):Config(),Base_0010C8F8(){}
