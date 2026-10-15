#define EN_EXTRA void target(void* arg);
#include "include/en214.h"
struct Hit {char pad[0x10];Vec3 m10;};
inline void cp(Vec3* d,const Vec3& s){*d=s;}
inline void cp2(Vec3& d,const Vec3& s){d=s;}
inline void cp3(En* e,Vec3 s){e->m570=s;}
void En::target(void* arg){if(mb3a){func_00214C68();Vec3 v=ma38;{Vec3* p=&v;p->setSub(*p,m3d0);}{Vec3 t;t.setAdd(m9e4,v);m570.set(t);}func_00215EC4();func_004F5BD8(this,0,0);}func_004F68AC(this,arg);}
