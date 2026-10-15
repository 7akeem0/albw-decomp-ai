typedef unsigned int u32; typedef int s32; typedef unsigned char u8;
struct CS;
void func_0010C0C0(CS* c);
void func_0010C160(CS* c);
struct Node { Node* prev; Node* next; u32 pad8[2]; s32 prio; };
struct List { u32 m0; Node* head; Node* tail; };
extern "C" CS bss_0079CC68;
extern "C" List data_00714888;
void func_003E45D0(Node* node) {
    CS* cs = &bss_0079CC68;
    func_0010C0C0(cs);
    if (node->prev != 0 || node->next != 0) { func_0010C160(cs); return; }
    List* const lp = &data_00714888;
    if (lp->head == node) { func_0010C160(cs); return; }
    Node* n = lp->head;
    
#define PR node->prio

    if (n == 0) {
        lp->head = node; lp->tail = node; node->prev = 0;
        func_0010C160(cs);
        return;
    }
    do {
        if (n->prio > PR) {
            Node* p = n->prev; node->next = n; node->prev = p;
            if (n->prev == 0) lp->head = node; else n->prev->next = node;
            n->prev = node;
            func_0010C160(cs);
            return;
        }
        n = n->next;
    } while (n);
    {
    Node* t = lp->tail;
    t->next = node;
    node->prev = t;
    node->next = 0;
    lp->tail = node;
    }
    func_0010C160(cs);
    return;
end:
    func_0010C160(cs);
}
