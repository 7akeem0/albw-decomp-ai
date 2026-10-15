#include "h7.h"

struct Node005807BC { Node005807BC* prev; Node005807BC* next; };
typedef u32 (*Pred005807BC)(void* obj, void* ctx);

void* func_005807BC(Node005807BC* head, void* ctx, u32 off, Pred005807BC fn) {
    Node005807BC* p = head->next;
    while (p != head) {
        if (fn((char*)p - off, ctx) == 0) return p;
        p = p->next;
    }
    return 0;
}
