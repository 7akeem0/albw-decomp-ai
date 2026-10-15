#include "ladder_types.h"
struct O4C07 {char pad0[0x858];u8 flag858;char pad859[6];u8 flag85f;char pad860[0xa4];s16 ids[6];void clearFlags();void clearIds();};
void O4C07::clearFlags(){flag858=0;flag85f=0;}
void O4C07::clearIds(){ids[0]=-1;ids[1]=-1;ids[2]=-1;ids[3]=-1;ids[4]=-1;ids[5]=-1;}
void target(O4C07*p){p->clearFlags();p->clearIds();}
