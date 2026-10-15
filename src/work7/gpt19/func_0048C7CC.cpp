#include "range.h"
struct Base {virtual ~Base();};struct S:Base {virtual ~S();void finalize(){}};
S::~S(){finalize();}
// Base4A1520 and operator-delete58FA5C.
