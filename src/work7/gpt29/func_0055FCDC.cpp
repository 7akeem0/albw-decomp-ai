#include "range.h"
struct Child55FC { char pad[0xa00]; f32 value; char padA04[0xb34-0xa04]; u8 active; };
struct Owner55FC { char pad[0x48]; Child55FC* child; u32 reserved; f32 threshold; };
bool f_0055FCDC(Owner55FC* p){if(p->child->active&&p->child->value<=p->threshold)return true;return false;}
