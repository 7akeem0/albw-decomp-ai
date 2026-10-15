#include "../../work7/gpt22/range.h"
struct O{};struct D{virtual bool invoke();O*owner;bool(O::*fn)();};
bool D::invoke(){if(owner&&fn)return (owner->*fn)();return false;}
