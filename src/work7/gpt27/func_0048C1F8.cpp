#include "range.h"
struct Disposer48C1{virtual ~Disposer48C1();u32 a,b;};
struct Obj48C1:Disposer48C1{virtual ~Obj48C1();static void*instance;static Obj48C1*disposer;};
void*Obj48C1::instance=0;Obj48C1*Obj48C1::disposer=0;
Obj48C1::~Obj48C1(){if(this==disposer){disposer=0;instance=0;}}
