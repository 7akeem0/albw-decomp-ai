#include "range.h"
extern "C" const u8 ro_006A003B[],ro_006A0037[],ro_006A0045[];
extern "C" void*data_007142C8;
extern "C" void func_0051C63C(void*,u32);
void target(NpcState22*p,u32 index){if(p->state9d3==2){u32 v=0;switch(p->pad9d2){case 0:v=ro_006A003B[index];break;case 1:v=ro_006A0037[index];break;case 2:v=ro_006A0045[index];break;}func_0051C63C(data_007142C8,v);}}
