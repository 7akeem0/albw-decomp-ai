#include "range.h"
struct B{B*prev,*next;u32 count;B(){count=0;prev=this;next=this;}};struct O:B{u32 a,b,c,d;O();};O::O():B(),a(0),b(0),c(0),d(0){}
