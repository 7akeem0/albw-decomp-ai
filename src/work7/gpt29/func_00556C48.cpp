#include "range.h"
struct Actor556C { char pad[0x74]; void* key; };
struct Owner556C { char pad[0x14]; Actor556C* actor; };
struct Manager556C { char pad[0x44]; void* active; };
extern Manager556C* data_0070B728;
bool f_00556C48(Owner556C* p){void* key=p->actor->key;if(data_0070B728->active&&data_0070B728->active==key)return true;return false;}
