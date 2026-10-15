#include "range.h"
struct Entry_54DE18{u32 value;char pad[52];};struct Owner_54DE18{char pad[260];Entry_54DE18 entries[4];};
bool f_54DE18(Owner_54DE18*p,u32 i){if(i>=4)return false;return p->entries[i].value!=0;}
