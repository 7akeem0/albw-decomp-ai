#include "ladder_types.h"
void* operator new[](u32,void*,s32) throw();
struct Entry4A6C {u32 a,b;};
struct Object4A6C {u32 capacity,count;Entry4A6C* data;Object4A6C(u32,void*);};
Object4A6C::Object4A6C(u32 n,void*heap):capacity(n){data=new(heap,4)Entry4A6C[n];count=0;}
