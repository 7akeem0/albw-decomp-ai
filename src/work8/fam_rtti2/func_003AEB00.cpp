#include "rtti_cpp.h"
struct A : Base { SEAD_RTTI_OVERRIDE(A, Base) u8 pad[0x495 - 4]; u8 m495; s8 m496; };
extern "C" char* data_00706E20;
extern "C" Base* func_0052FBA0(void* mgr, u32 h);
struct Node { Node* prev; Node* next; };
struct Elem { u32 h; u8 done; u8 pad[3]; Node node; };
static inline Elem* toElem(Node* n) { return (Elem*)((u8*)n - 8); }
struct Self {
    u8 pad[0x320]; Node head; u8 pad2[0x93b - 0x328]; u8 m93B; u8 m93C;
    void func_003AEB00();
};
void Self::func_003AEB00()
{
    s32 n = 0;
    for (Elem* e = toElem(head.next); e != toElem(&head); e = toElem(e->node.next)) {
        if (e->done) continue;
        Base* o = func_0052FBA0(data_00706E20 + 0x3dbbc, e->h);
        if (o) {
            A* a = DynamicCast<A>(o);
            if (a && a->m496) {
                n++;
                e->done = 1;
            }
        }
    }
    if (n >= m93C) m93B = 1;
}
