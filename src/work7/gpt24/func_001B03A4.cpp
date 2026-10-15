#include "range.h"
struct Obj1B0324{char pad[0x910];u8 kind;};
struct HitMessage1B0324;
extern bool func_004F7A60(Obj1B0324*,const HitMessage1B0324*);
extern bool func_004F8998(Obj1B0324*,bool,bool*);
extern "C" bool target(Obj1B0324*p,const HitMessage1B0324*message){return p->kind!=6&&func_004F7A60(p,message)&&func_004F8998(p,false,0);}
