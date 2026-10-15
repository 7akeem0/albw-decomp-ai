#include "range.h"
struct Child2D16 {u8 pad[0xac];u32 value;void set(u32 n){value=n;}};
struct Obj2D16 {u8 pad[8];Child2D16* child;~Obj2D16();};
Obj2D16::~Obj2D16(){child->set(0);}
