#include "ladder_types.h"
struct Link49F5 {Link49F5* prev;Link49F5* next;};
struct List49F5:Link49F5 {u32 count;};
extern "C" void func_0049F5FC(List49F5*p){
    Link49F5* link=p->next;
    while(link!=p){Link49F5* old=link;link=link->next;old->next=0;old->prev=0;}
    p->next=p;p->count=0;p->prev=p;
}
