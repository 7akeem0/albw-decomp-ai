#include "range.h"
extern bool func_00532984(Object5328*, const Arg2CC*);
bool Object5328::test(const Arg2CC* other) { if(other->id == id) return true; return func_00532984(this, other); }
