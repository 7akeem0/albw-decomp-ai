#include "ladder_types.h"
extern void* data_007153D0;
extern "C" void func_0048B994(void*,void*);
struct Disposer4929:Disposer4A15 {virtual ~Disposer4929();};
void* getManager4929(){return data_007153D0;}
Disposer4929::~Disposer4929(){void*m=getManager4929();if(m)func_0048B994(m,this);}
