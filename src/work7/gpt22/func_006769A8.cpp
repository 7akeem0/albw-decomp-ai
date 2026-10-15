#include "range.h"
struct Value {u32 v;};
extern "C" void func_00676878(void*,const Value&,const Value&,u32);
void target(void* p,const Value& value,u32 kind){Value copy=value;func_00676878(p,value,copy,kind);}
