#include "range.h"
struct Actor556A { char pad[0x68]; void* key; };
struct Owner556A { char pad[0x14]; Actor556A* actor; };
struct Manager556A { char pad[0x44]; void* active; };
extern Manager556A* data_0070B728;
bool f_00556AF8(Owner556A* p){void* key=p->actor->key;if(data_0070B728->active&&data_0070B728->active==key)return true;return false;}
