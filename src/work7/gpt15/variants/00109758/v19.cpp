#include "../../range.h"
struct Node{Node*prev,*next;};struct List{Node node;s32 count,offset;List(){count=0;node.next=&node;node.prev=&node;}void setOffset(s32 v){offset=v;}};struct S{virtual void v0();u32 a,b,c,d;List list;S();};S::S():a(0),b(0),c(0),d(0),list(){list.setOffset(4);}
