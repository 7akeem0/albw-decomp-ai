#include "../../range.h"
struct O{u8 storage[0x80];O();};
inline void restore(Heap30*p){if(p!=(Heap30*)1)func_0010983C(data_00715210,p);}
inline O* make(Heap30*h){return new(h,4)O;}
struct Scope{Heap30*previous;Scope(Heap30*h){if(h)previous=func_0010983C(data_00715210,h);else previous=(Heap30*)1;}~Scope(){restore(previous);}};
O* target(Heap30*heap){Scope scoped(heap);O* result=new(heap,4)O;return result;}
