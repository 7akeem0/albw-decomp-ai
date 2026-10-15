#include "range.h"
struct O{};struct D{virtual void invoke();O*owner;void(O::*fn)();};
void D::invoke(){if(owner&&fn)(owner->*fn)();}
