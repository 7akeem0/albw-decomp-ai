#include "ladder_types.h"
struct Global4ED8 {char pad0[0x18];s8 kind;};
extern Global4ED8*data_00709DF8;
bool target(){s32 kind=data_00709DF8->kind;return kind==0||kind==1||kind==32;}
