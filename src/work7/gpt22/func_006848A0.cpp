#include "range.h"
struct O{};struct D{virtual bool invoke(void*);O*owner;bool(O::*fn)(void*);};bool D::invoke(void*a){if(owner&&fn)return(owner->*fn)(a);return false;}
