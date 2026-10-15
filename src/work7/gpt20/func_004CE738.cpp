#include "ladder_types.h"
struct NoThrowTag20 {};
void* operator new(u32,NoThrowTag20) throw();
struct Payload4CE7 {char data[0xb0];Payload4CE7(void*,void*);};
Payload4CE7*target(void*owner,void*arg){NoThrowTag20 tag;return new(tag)Payload4CE7(owner,arg);}
