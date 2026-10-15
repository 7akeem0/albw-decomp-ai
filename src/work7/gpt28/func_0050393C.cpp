#include "range.h"
struct Node5039 { Node5039* next; Node5039* previous; };
struct Item5039 { virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void update(); Node5039 node; };
struct Object5039 { char pad[8]; Node5039 sentinel; void update(); };
void Object5039::update() {
    Node5039* end=&sentinel;
    for(Node5039* p=sentinel.next;p!=end;p=p->next) {
        Item5039* item=(Item5039*)((char*)p-4);
        item->update();
    }
}
