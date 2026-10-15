#include "../../range.h"
struct Base_001B6E04{virtual void v();u8 pad[0x34];Base_001B6E04();};struct Array{s32 count,capacity;void**data;Array():count(0),capacity(0),data(0){}void func_0010B3EC(s32,void*);};struct Fixed:Array{void*storage[32];Fixed():Array(){func_0010B3EC(32,storage);}};struct S:Base_001B6E04{Fixed array;u8 flag;S();};S::S():Base_001B6E04(),array(),flag(0){}
