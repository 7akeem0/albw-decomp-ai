#include "range.h"
extern "C" void func_00676AA0(void**, void*);
extern "C" void func_006769C4(void*, u32*, u32);
struct Node { u32 m0; Node* next; };
struct Holder { u8 pad0[8]; };
struct Obj {
    Node* head;
    s32 f(Holder** out, u32* key, Holder** hp);
};
s32 Obj::f(Holder** out, u32* key, Holder** hp) {
    Holder** o = out;
    Holder* h = *hp;
    u32 k;
    void* tmp;
    func_00676AA0(&tmp, (char*)h + 8);
    if (tmp == 0) return 2;
    k = *key;
    func_006769C4((char*)tmp + 8, &k, k);
    *o = *hp;
    head = head->next;
    return 0;
}
