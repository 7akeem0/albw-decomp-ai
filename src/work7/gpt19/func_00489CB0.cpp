#include "range.h"
struct S{virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void unused6();virtual void unused7();virtual void unused8();virtual void unused9();virtual void unused10();virtual void unused11();virtual void unused12();virtual void unused13();virtual void unused14();virtual void unused15();virtual void unused16();virtual void unused17();virtual u32 call(void*,void*);char pad[0x48];u8 enabled;};
u32 f_00489CB0(S*p,void*a,void*b){if(p->enabled && b && a)return p->call(a,b);return 0;}
