#include "ladder_types.h"
struct Factory49CE {char pad0[0x10];void* heap;};
void* operator new(u32,void*,s32) throw();
struct Payload49CE {char storage[0x180];Payload49CE(Factory49CE*);};
Payload49CE*target(Factory49CE*p){return new(p->heap,4)Payload49CE(p);}
