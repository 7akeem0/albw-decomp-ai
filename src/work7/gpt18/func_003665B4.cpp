#include "range.h"
struct Z665 {u32 v;Z665():v(0){}};
struct B665 {B665(void*);virtual ~B665();u8 pad[0x6c];};
struct D665:B665 {Z665 value;D665(void*);};
D665::D665(void*a):B665(a),value(){}
