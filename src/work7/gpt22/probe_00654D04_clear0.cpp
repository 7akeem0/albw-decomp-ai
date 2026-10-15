#include "range.h"
struct Link{u8 pad[0x10];void*selected;};struct Global{u8 pad[0x3dbe8];Link*link;};extern "C" Global*data_00706E20;
struct S{u8 pad[0x2cc];void*id;u8 gap[0x3dc-0x2d0];float velocity[3];};
void target(S*p){Link*t=data_00706E20->link;void*&selected=t->selected;if(selected&&selected==p->id)selected=0;for(int i=0;i<3;i++)p->velocity[i]=0;}
