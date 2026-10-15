#include "ladder_types.h"
void Record4CF5::set(u32 j,const u32& v){values[j]=v;}
void f_004CF5DC(O4CF5* p,u32 i,u32 j,const u32& v){Record4CF5* q=&p->buffer->data[i];q->set(j,v);}
