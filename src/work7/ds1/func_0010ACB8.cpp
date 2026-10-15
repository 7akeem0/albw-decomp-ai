typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010C380(void*, void*);

struct Node {
    u8 pad[0x18];
    u32 m18;
    u32 m1c;
};

void* func_0010ACB8(void* a0, u32 key) {
    void* n = 0;
    for (;;) {
        n = func_0010C380(a0, n);
        if (n == 0) break;
        Node* t = (Node*)n;
        if (t->m18 > key) continue;
        if (key >= t->m1c) continue;
        void* r = func_0010ACB8((u8*)n + 0xc, key);
        return r ? r : n;
    }
    return n;
}
