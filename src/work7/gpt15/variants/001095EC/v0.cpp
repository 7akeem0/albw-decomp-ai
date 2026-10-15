#include "../../range.h"
struct OwnerBase{u32 a,b;OwnerBase():a(0),b(0){}};struct S:OwnerBase{u32 current,kind;u8 active;u8 reserved[3];void*ptr;virtual ~S();S();};S::S():current(0),kind(2),active(0),ptr(0){}
