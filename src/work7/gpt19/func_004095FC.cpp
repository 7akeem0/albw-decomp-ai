#include "range.h"
// Member destructor target: 00412728.
struct Member {u32 word;~Member();};
struct S {u8 pad[0xc];Member sub;~S();};
S::~S(){}
