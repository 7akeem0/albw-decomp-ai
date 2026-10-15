#include "range.h"
struct CallbackOwner30;
typedef void(CallbackOwner30::*Method30)(s32);
struct Callback30 {virtual ~Callback30();CallbackOwner30*owner;Method30 method;};
void target(Callback30*p,s32 arg){if(p->owner&&p->method)(p->owner->*p->method)(arg);}
