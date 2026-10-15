#include "range.h"
struct Base41DF{virtual ~Base41DF();u8 pad[0x118-4];Base41DF();};
struct Member41DF{u8 pad[4];Member41DF();};
struct Owner41DF:Base41DF{void*owner;u8 a,b;u8 pad11e[2];Member41DF member;Owner41DF(void*);};
Owner41DF::Owner41DF(void*p):owner(p),a(0),b(0),member(){}
