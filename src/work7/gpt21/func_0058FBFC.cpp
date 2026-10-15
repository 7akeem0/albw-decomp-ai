#include "range.h"
u32 f_58FBFC(u32 bits){
    u32 value=bits<<1;
    u32 kind=value<<8;
    if(kind)kind=4;
    if(value>>24)kind|=1;
    if((~value&0xff000000u)==0)kind|=2;
    if(kind==1)kind=5;
    return kind;
}
