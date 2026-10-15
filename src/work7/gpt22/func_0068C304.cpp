#include "range.h"
struct O{};struct D{virtual void invoke(void*,void*);O*owner;void(O::*fn)(void*,void*);};void D::invoke(void*a,void*b){if(owner&&fn)(owner->*fn)(a,b);}
