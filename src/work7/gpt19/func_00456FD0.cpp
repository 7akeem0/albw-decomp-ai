#include "range.h"
struct Global56FD0 {u8 data[0x9C0];u32 mode;};
extern Global56FD0* data_00711DE8;
struct Owner56FD0 {u8 data[0x17C];s32 state;};
extern "C" __weak void sub_0066D544(s32*,u32);
extern "C" void f_00456FD0(Owner56FD0*s){if(data_00711DE8->mode>1)return;if(s->state<=30)return;sub_0066D544(&s->state,27);}
