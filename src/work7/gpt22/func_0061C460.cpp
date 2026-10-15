#include "range.h"
struct NpcExtended22 : NpcVirtual22 {
 virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33();
 virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37();
 virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41();
 virtual void v42(); virtual void request(s32,s32);
};
extern "C" void func_0061C490(NpcExtended22*,s32);
void target(NpcExtended22* p) {p->request(4,0);func_0061C490(p,0);}
