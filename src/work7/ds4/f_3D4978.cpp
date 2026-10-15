#include "ds4.h"
struct T { s16 a0; s16 a2; s16 a4; s16 a6; s16 a8; s16 aA; };
void f(T* self) {
  if (self->a0 < 0x28) self->a0 = 0x28;
  if (self->a2 < 0x24) self->a2 = 0x24;
  if (self->a6 > 0x91) self->a6 = 0x91;
  if (self->a8 > 0x91) self->a8 = 0x91;
  if (self->aA > 0x91) self->aA = 0x91;
}
