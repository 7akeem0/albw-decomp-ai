#include "range.h"
extern void func_002E1B70(void*);
struct Base166460{virtual ~Base166460();u8 pad[0xa8];};
struct Member166460{~Member166460(){func_002E1B70(this);}};
struct D166460:Base166460{Member166460 member;~D166460();};
D166460::~D166460(){}
