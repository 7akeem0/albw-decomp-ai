#include "range.h"
inline u32* tls(){u32* p;__asm{mrc p15,0,p,c13,c0,3}return p;}
extern "C" void func_00104198(){
    u32* p=tls();
    p[0]=0;p[1]=0;p[2]=0;p[3]=0;p[4]=0;p[5]=0;p[6]=0;p[7]=0;
    p[8]=0;p[9]=0;p[10]=0;p[11]=0;p[12]=0;p[13]=0;p[14]=0;p[15]=0;
}
