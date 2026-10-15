#include "../../range.h"
extern const char ro_006A48C4[];extern void*data_00712588;extern void func_002DF3E4(void*);struct Base_0048D088{virtual void v();u8 pad[0xb8];Base_0048D088(void*,const char*);};struct S:Base_0048D088{u32 word;S(void*);};S::S(void*arg):Base_0048D088(arg,ro_006A48C4),word(0){func_002DF3E4(data_00712588);}
