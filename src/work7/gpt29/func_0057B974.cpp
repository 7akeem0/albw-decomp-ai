#include "range.h"
struct Owner57B9 { char pad[0xd]; u8 first,second; char gapF[0x74-0xf]; s32 count; u8 busy; };
bool f_0057B974(Owner57B9* p){if(!p->busy&&p->first==3&&p->second==3&&p->count>=30)return true;return false;}
