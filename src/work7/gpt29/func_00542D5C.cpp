#include "range.h"
struct Global542 { char pad0[0x18]; u8 kind;char pad19[3];u32 mode; };
extern Global542* data_00709DF8;
bool f_00542D5C() { u8 kind=data_00709DF8->kind;u32 mode=data_00709DF8->mode;if(kind!=7||mode!=3)return false;return true; }
