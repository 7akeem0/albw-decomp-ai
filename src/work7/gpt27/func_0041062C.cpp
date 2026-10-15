#include "range.h"
struct Base106{virtual ~Base106();u8 pad[0x118-4];Base106();};
struct Member106{u8 pad[4];Member106();};
struct Owner106:Base106{void*owner;u8 a,b;u8 pad11e[6];Member106 member;Owner106(void*);};
Owner106::Owner106(void*p):owner(p),a(0),b(0),member(){}
