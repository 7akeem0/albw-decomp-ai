#include "../../nm1/range.h"
struct PFE {void*p;u32 n;};struct CFE {u8 pad[0x14];PFE pair;};
extern "C" bool f_003E06FC(CFE* c,void*q,u32 n){if(!q)return false;c->pair.p=q;c->pair.n=n;return true;}
