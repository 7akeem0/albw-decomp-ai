#include "ladder_types.h"
struct V {float x,y,z,w;};
struct O {u32 m0;u8 m4;char p5[0x97];V m9c;};
inline void copy(V* d,V v){*d=v;}
inline void impl(O* p,V v,u8 flag){V* d=&p->m9c;*d=v;p->m4=flag;}
inline void impl2(O* p,u8 flag,V v){V* d=&p->m9c;*d=v;p->m4=flag;}

void target(O* p,V v){impl(p,v,1);}
