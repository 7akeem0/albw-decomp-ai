#include "range.h"
struct Child{char pad[8];s8 value;};struct S{char pad[0x51c];Child*child;__attribute__((weak)) Child*get();};extern S*data_00709F30;
Child*S::get(){return child;}
s8 f_54F3AC(){Child*c=data_00709F30->get();return c?c->value:0;}
