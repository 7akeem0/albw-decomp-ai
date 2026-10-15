#define EN_EXTRA void target();
#include "include/en214.h"
inline void setv(Vec3& d,float x,float y,float z){d.x=x;d.y=y;d.z=z;}
void En::target(){if(mState.mCounter==10&&ma50){s32 tries=0;s32 n;for(s32 i=0;i<30;i++){n=randU32(func_0058A7D4(this),ma54);if(ma58!=n)break;++tries;}if(tries==30){s32 max=ma54-1;n=ma58;if(n==max)--n;else ++n;}ma5c=n;Vec3 pos=ma50->at(n)->pos;pos.y-=4.0f;m368.set(pos);m3d0.set(pos);ma38.set(pos);}Vec3 d;Vec3* p=&d;p->setSub(*func_00520FC0(this),m3d0);func_0051D2F4(&m3e8,func_0068C690(d),0.1f,0,data_0070AA74);if(mState.mCounter>120)mState.changeState(1);}
