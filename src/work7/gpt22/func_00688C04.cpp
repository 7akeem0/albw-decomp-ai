#include "range.h"
struct S{u32 num,max;void**data;void*buf[2];S();void setBuffer(s32,void*);};S::S():num(0),max(0),data(0){setBuffer(2,buf);}
// setBuffer0010B3EC
