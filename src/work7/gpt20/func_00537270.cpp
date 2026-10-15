#include "ladder_types.h"
struct State5372 {char pad0[0x20];s8 kind;char pad21[0x6b];u8 flag;};
struct O5372 {char pad0[0x400];State5372 state;};
bool target(O5372*p){State5372&s=p->state;return (s.kind==1||s.kind==2)&&!s.flag;}
