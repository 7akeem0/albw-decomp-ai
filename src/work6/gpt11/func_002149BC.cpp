#define EN_EXTRA void target();
#include "include/en214.h"
struct Hit {char pad[0x10];Vec3 m10;};
void En::target(){Vec3 d; Vec3* p=&d; p->setSub(*func_00520FC0(this),m3d0); func_0051D2F4(&m3e8,func_0068C690(d),0.1f,0,data_0070AA74); if(!mab8.step())mState.changeState(2);}
