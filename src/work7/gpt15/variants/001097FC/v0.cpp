#include "../../range.h"
struct Base_0010B880{virtual void v();u8 pad[0x144];Base_0010B880();};struct Member_0010DA24{u32 words[2];Member_0010DA24();};struct S:Base_0010B880{u32 a,b;Member_0010DA24 member;u8 flag;S();};extern S*data_00714FA8;S::S():Base_0010B880(),a(0),b(0),member(),flag(0){data_00714FA8=this;}
