#include "range.h"
struct O{};struct D{virtual bool invoke(void*,void*);O*owner;bool(O::*fn)(void*,void*);};bool D::invoke(void*a,void*b){if(owner&&fn)return(owner->*fn)(a,b);return false;}
