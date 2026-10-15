#include "range.h"
struct B { B(); };
struct S:B { S(); };
S::S() {}
