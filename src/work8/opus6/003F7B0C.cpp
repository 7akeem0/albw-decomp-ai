typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

struct Item;
Item* func_003EA524(Item* p);
struct Res { u32 m0; s32 m4; };
struct Sub23C { void func_003F3544(); };
struct Node {
    char pad[0x14];
    s32 m14;
    Res* m18;
    u32 m1c;
    s32 m20;
    char pad24[0xcc - 0x24];
    Node* mcc;
    Node* md0;
    u32 md4;
    u32 md8;
    Item* mdc;
    Item* me0;
    char pade4[0x23c - 0xe4];
    Sub23C m23c;
};
struct Mgr {
    char pad[0x20];
    Node* mHeads[(0x328 - 0x20) / 4];
    s32 m328;
    char pad32c[0x474 - 0x32c];
    s32 m474;
    void f(Node* n);
};

void Mgr::f(Node* n) {
    Item* p = n->mdc;
    while (p != 0) p = func_003EA524(p);
    p = n->me0;
    while (p != 0) p = func_003EA524(p);
    n->m23c.func_003F3544();
    n->md4 = 0;
    n->m18->m4--;
    n->m20 = -1;
    if (n->m18->m4 == 0) m474--;
    m328++;
    if (mHeads[n->m14] == n) {
        Node* next = n->md0;
        mHeads[n->m14] = next;
        if (next) next->mcc = 0;
    } else {
        Node* next = n->md0;
        if (next) next->mcc = n->mcc;
        n->mcc->md0 = n->md0;
    }
}
