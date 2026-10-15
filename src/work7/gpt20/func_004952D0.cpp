#include "ladder_types.h"
// Member pointer destruction D1=0058FA5C, baseD1=004A1520, original vtable006F6A10.
struct Target4952{virtual ~Target4952();};
struct O4952:Disposer4A15{char pad10[0x10];Target4952* target;virtual ~O4952();};
O4952::~O4952(){target->Target4952::~Target4952();}
