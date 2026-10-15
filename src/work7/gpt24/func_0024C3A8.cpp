#include "range.h"
struct Predicate24C3{virtual bool func_0058F64C(void*);};
struct ActorList24C3{u32 data[4];};
struct Game24C3{char pad[0x3dbbc];ActorList24C3 actors;};
extern Game24C3*data_00706E20;
extern u32 func_0052FD14(ActorList24C3*,Predicate24C3*);
extern "C" bool target(){Predicate24C3 predicate;return func_0052FD14(&data_00706E20->actors,&predicate)!=0;}
