#include "../a5.h"
struct A { bool f(); bool g(); };  // g = 0x1E6948
bool A::f() { return g(); }
