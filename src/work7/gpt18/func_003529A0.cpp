#include "range.h"
struct BaseB;
struct ReqBase18 {ReqBase18(u32,BaseB*);u32 m0;BaseB* m4;u32 m8;const Vec3* mC;u32 m10,m14;};
struct Req24:ReqBase18 {s32 m18,m1C,m20;Req24(u32,BaseB*);};
Req24::Req24(u32 a,BaseB* b):ReqBase18(a,b),m18(-1),m1C(-1),m20(0){}
