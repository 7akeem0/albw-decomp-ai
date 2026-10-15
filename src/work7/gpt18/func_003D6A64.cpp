#include "range.h"
struct List{List*prev,*next;u32 count;List(){count=0;prev=this;next=this;}};struct O{List first,second;u32 a,b,c;u8 flag;O();};O::O():first(),second(),a(0),b(0),c(0),flag(0){}
