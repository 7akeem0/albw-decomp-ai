#define EN_EXTRA void target();
#include "include/en214.h"
inline float normalize(Vec3* p){return p->normalize();}
float norm(Vec3* p){return p->normalize();}
void En::target(){if(m510->m4)return;if(m508<=0){mState.changeState(12);return;}if(mb3d){mState.changeState(2);return;}if(m510->m5!=15){ma64=func_00111A64(func_0058A7D4(this));func_004D80A4(&m9fc,ma64,1.0f);Vec3& v=m9fc;m9fc.y=0.0f;v.normalize();m9fc.y=0.0f;func_00215B90(0.0f);mState.changeState(6);}else{func_00215B90(0.0f);mState.changeState(4);}}
