#include "range.h"
struct Child582C{char pad0[0x128];f32 value;};struct Owner582C{char pad0[0x1418];SafeSlots<Child582C*,16> slots;};
f32 f_00582C90(Owner582C*p,u32 i){Child582C*c=p->slots[i];if(c)return c->value;return 1.f;}
