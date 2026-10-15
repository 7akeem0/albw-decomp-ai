#include "ladder_types.h"
struct Child50BE{u8 pad0;s8 kind;};
struct Arg50BE{char pad[0x2c];Child50BE* child;};
bool f_0050BE40(void*,Arg50BE* a){return a->child && a->child->kind==2;}
