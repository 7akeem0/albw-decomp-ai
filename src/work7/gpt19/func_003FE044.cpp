#include "range.h"
struct M{u32 words[4];M();};struct S{u32 zero;M a,b;char gap[4];u8 flagA,flagB;char gap2[2];u8 flagC;S();};S::S():zero(0),flagA(0),flagB(0),flagC(0){}
// M C1 003E6A90
