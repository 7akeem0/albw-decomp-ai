#include "en21.h"
static const char appear[]="Appear";
static const char fire[]="SE_FireMoldworm_APPEAR";
static const char normal[]="SE_Moldworm_APPEAR";
void En::func_0021A4F0(){if(!m1371){startAnim(appear);if(func_00588BE4(this)==ro_006939A8){func_00150A84(this,sead::SafeString(fire),0);}else{func_00150A84(this,sead::SafeString(normal),0);}m1371=1;}}
