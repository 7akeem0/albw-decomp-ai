
#define EN_EXTRA void impl();
#include "en21.h"
inline void En::impl(){
 if(m508<=0) mState.changeState(5);
 else {
 m3dc.x=0.0f;m3dc.z=0.0f;
 m1328=11.0f;m132c=0.0f;
 m1376=0;
 mState.changeState(2);m1375=2;
 }
}

void En::func_0021AE78(){if(m510->m4)return;impl();}
