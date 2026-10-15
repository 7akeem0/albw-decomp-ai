#include "range.h"
struct Owner414F{u8 pad[0x20];u16 flags;u8 gap[2];f32 value;};
inline f32 nonnegative(f32 value,f32 zero){return value<zero?zero:value;}
void func_00414F54(Owner414F*p,f32 value){value=nonnegative(value,0.0f);if(p->value!=value){p->value=value;p->flags|=0x40;}}
