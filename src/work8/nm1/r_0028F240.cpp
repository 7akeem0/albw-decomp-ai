#include "range.h"
struct Child{u8 pad[0x42];s16 kind;u8 pad44[0x7d];u8 flag;};
bool f_0028F248(Child*c){c->flag=1;return c->kind==77||c->kind==78;}
