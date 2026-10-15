#include "../../work7/gpt22/range.h"
void IntermediateActor22::init(ActorCreate22*a){initialWord=a->initialWord;func_0014A998(data_00712468,false);}
struct ActorCreate28:ActorCreate22{u8 pad[0x28-0xc];s16 m28;};
struct CreatedActor603:IntermediateActor22{void*created;s32 value;CreatedActor603(ActorCreate22*a):IntermediateActor22(a),created(func_0050574C((CreatedActor22*)this,a,0,0)),value(((ActorCreate28*)a)->m28){}};
CreatedActor603*target(ActorCreate22*a){return new((NoThrow22()))CreatedActor603(a);}
