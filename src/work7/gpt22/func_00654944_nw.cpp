#include "range.h"
extern "C" void func_0065DF0C(StateControl22*,s32);
extern "C" void func_003931EC(StateControl22*,s32);
extern "C"  void func_0065DF78(StateControl22*);
void target(EnemyDecision22*p){if(p->gate->busy)return;if(p->health<=0){func_0065DF0C(&p->state,9);func_003931EC(&p->state,9);func_0065DF78(&p->state);}else{func_0065DF0C(&p->state,0);func_003931EC(&p->state,0);func_0065DF78(&p->state);}}
