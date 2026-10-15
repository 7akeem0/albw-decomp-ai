#include "range.h"
struct Handle420{void*ptr;Handle420(void*p):ptr(p){}void reset(const Handle420&);void resetPtr(void*);};struct Obj4202{u8 pad[8];void*ptr;u32 count;Handle420 handle;u8 pad14[0x28-0x14];u32 value;};
void Handle420::reset(const Handle420&x){if(ptr)*this=x;}void*take(void*&p,void*z){void*old=p;p=z;return old;}void*func_004202DC(Obj4202*p){Handle420 z(0);p->handle.reset(z);void*old=take(p->ptr,z.ptr);p->count=(u32)z.ptr;p->value=(u32)z.ptr;return old;}
