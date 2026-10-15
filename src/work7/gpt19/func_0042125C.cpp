#include "range.h"
struct B { virtual ~B();u32 word4;void* p8; };
struct S:B {virtual ~S();void release();};
S::~S(){if(p8)release();}
