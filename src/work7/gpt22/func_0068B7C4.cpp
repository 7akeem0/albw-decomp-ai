#include "range.h"
struct O{};struct D{virtual void invoke(void*);O*owner;void(O::*fn)(void*);};void D::invoke(void*a){if(owner&&fn)(owner->*fn)(a);}
