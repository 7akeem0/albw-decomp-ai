#include "range.h"
struct Disposer4933 { virtual ~Disposer4933(); };
struct Object4933 : Disposer4933 { virtual ~Object4933(); };
extern void* data_007153D0;
extern void func_0048BAB8(void*,Object4933*);
void* manager4933() { return data_007153D0; }
Object4933::~Object4933() { void* m=manager4933();if(m)func_0048BAB8(m,this); }
