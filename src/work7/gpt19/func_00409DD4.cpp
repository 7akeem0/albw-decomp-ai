#include "range.h"
struct B{virtual ~B();};
struct S:B{virtual ~S();void finalize(){}};
S::~S(){finalize();}
