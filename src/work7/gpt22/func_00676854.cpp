#include "range.h"
struct Node{Node* prev;Node* next;};struct List{Node node;s32 count;List(){node.prev=&node;count=0;node.next=&node;}};struct S{u32 value;u8 kind;u8 pad[3];List list;S();};S::S():value(0),kind(1){}
