// Base destructor = 004A1520; derived vtable = 006F5230.
#include "range.h"
struct IDisposer{virtual ~IDisposer();};
struct S:IDisposer{virtual ~S();void finalize(){}};
S::~S(){finalize();}
