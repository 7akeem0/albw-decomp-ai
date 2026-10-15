#include "../range_types.h"
struct Obj26DF {char pad[0x7c];Timer25 timer;};
struct Mgr26DF;
extern Mgr26DF* data_00712F70;
extern "C" void func_0014B1D4(Mgr26DF*,s32,s32);
extern "C" void f_0026DFF4(Obj26DF*p){p->timer.start(15);func_0014B1D4(data_00712F70,0,1);}
