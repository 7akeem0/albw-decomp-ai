// 0x10E250: init-method (not a ctor) for the thread-local storage singleton:
// tag = &dtor_table, empty circular intrusive list, then key init + clear slot.
typedef unsigned int u32;
extern u32 ro_006F7E20[];

struct Node { Node* next; Node* prev; };
struct Key { u32 v; Key* init(); void set(u32 x); };

struct D {
    u32 tag;          // +0x0    = ro_006F7E20
    u32 f4, f8, fc, f10;
    Node root;        // +0x14   next/prev self-loop when empty
    u32 count;        // +0x1c
    u32 z;            // +0x20
    Key key;          // +0x24
    D* initialize();
};

D* D::initialize() {
    tag = (u32)ro_006F7E20;
    Node* p = &root; p->prev = p; count = 0; p->next = p; z = 0;
    u32 v = 0;
    Key* k = key.init();
    k->set(v);
    return (D*)((char*)k - 0x24);
}
