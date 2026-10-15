#include "range.h"
struct B{B*prev,*next;u32 count;B(){count=0;prev=this;next=this;}};struct O{u32 a;B list;u32 b,c;O();};O::O():a(0),list(),b(0),c(0){}
