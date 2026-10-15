#include "../../range.h"
struct Array{s32 count,capacity;void**data;void push(void*p){if(count<capacity){data[count]=p;++count;}}};struct Receiver{void func_004B948C(void*);};struct S{u8 pad10[0x10];Receiver*receiver;u8 pad14[0x38-0x14];Array array;u8 pad44[0xc4-0x44];u8 enabled;};void func_0014CFF0(S*p,void*arg){p->array.push(arg);if(p->enabled&&p->receiver)p->receiver->func_004B948C(arg);}
