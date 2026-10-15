#include "../../range.h"
struct Object;struct Link{u8 pad[12];Object*object;};struct Arg{u8 pad[12];Link*link;};extern u32 func_001102AC(Object*);extern u32 func_0010FD9C(void*,u32,u32,Arg*,Object*);u32 func_0010F970(void*self,u32 ignored,u32 value,Arg*arg){Object*object=arg->link->object;return func_0010FD9C(self,func_001102AC(object),value,arg,object);}
