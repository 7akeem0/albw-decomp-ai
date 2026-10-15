#include "range.h"
struct B880 {B880(u32);virtual ~B880();u8 pad[0xa4];};
struct D880:B880 {u32 value;D880(u32);};
D880::D880(u32 a):B880(a),value(0){}
