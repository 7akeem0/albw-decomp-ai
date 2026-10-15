#include "range.h"
struct Limits5430{char pad0[8];s8 lower,enabled;};struct Sub5430{char pad0[8];s16 value;};struct Owner5430{char pad0[0x500];Sub5430 sub;char pad50a[0x3b2];Limits5430*limits;};
bool f_005430D4(Owner5430*p){return p->limits->enabled>0&&p->limits->lower<=p->sub.value;}
