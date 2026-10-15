#include "range.h"
struct Pair {void* p;u32 n;};struct Child {char pad[0x1c];Pair pair;};
bool f_0040C844(Child* c,void* value,u32 n){if(!value)return false;c->pair.p=value;c->pair.n=n;return true;}
