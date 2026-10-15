#include "range.h"
#include "actor19.h"
extern void func_0036D0E0(void*);
struct Member{u32 opaque;~Member(){func_0036D0E0(this);}};
struct C:ActorBase19{u8 pad[0x544-0x324];Member member;virtual ~C(){} };
struct D:C{virtual ~D();};
D::~D(){}
