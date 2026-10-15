#include "range.h"
struct Array {s32 count,max;u32*data;Array():count(0),max(0),data(0){}};extern void func_0010B3EC(Array*,s32,u32*);
struct Fixed {Array array;u32 buffer[16];Fixed(){func_0010B3EC(&array,16,buffer);}};
struct Byte {u8 v;Byte(u8 n):v(n){}};
struct Obj {Fixed fixed;u32 value;Byte mode;u8 flag;Obj();};
Obj::Obj():value(0),mode(2),flag(0){}
