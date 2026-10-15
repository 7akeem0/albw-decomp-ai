#include "range.h"
struct Base {virtual ~Base();char pad[0x4c];};
struct Buffer {u32 a,b;void* data;};
extern void func_0048C22C(Buffer*);
struct S:Base {Buffer buffer;virtual ~S();};
S::~S(){func_0048C22C(&buffer);}
// Base D1 0048A134, delete 0058FA5C, S vtable 006F5160.
