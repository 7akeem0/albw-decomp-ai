#include "range.h"
extern void*data_00714EE8;
struct Base48D{virtual ~Base48D();u8 pad4[0xbc-4];};
struct Flag48D{u8 active;~Flag48D(){if(active)data_00714EE8=0;}};
struct Obj48D:Base48D{Flag48D flag;virtual ~Obj48D();};
Obj48D::~Obj48D(){}
