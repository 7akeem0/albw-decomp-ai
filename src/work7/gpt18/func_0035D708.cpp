#include "range.h"
struct G{char pad[0x1c];u32 value;u32 getValue()const;};extern G*data_0070D858;struct O{char pad[0x778];u32 value;};bool f(O*p,s32 n){if(n==4)p->value=data_0070D858->getValue();return true;}
