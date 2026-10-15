typedef unsigned int u32;
struct Node { u32 id; u32 m4, m8, mc, m10, m14; Node* next; };
typedef void* (*AllocFn)(u32, u32, u32, u32);
extern AllocFn data_00714820;
struct Tbl {
    char pad[0xa4]; Node* buckets[32]; u32 m124; Node* m128[1];
    void select(u32 id) {
        Node* n = buckets[id & 0x1f];
        if (n) { do { if (n->id == id) break; n = n->next; } while (n); }
        if (id != 0 && n == 0) {
            AllocFn f = data_00714820;
            n = f ? (Node*)f(0x10000, 0x100, 0, 0x1c) : 0;
            n->m4 = 0; n->m8 = 0; n->mc = 0; n->m10 = 0; n->m14 = 0; n->next = 0;
            n->id = id;
            Node* p = buckets[id & 0x1f];
            if (p == 0) buckets[id & 0x1f] = n;
            else if (id < p->id) { n->next = p; buckets[id & 0x1f] = n; }
            else { Node* prev = p; Node* q = prev->next; while (q != 0) { if (id < q->id) { prev->next = n; n->next = q; break; } prev = q; q = q->next; } if (q == 0) prev->next = n; }
        }
        m128[m124] = n;
}
};
extern Tbl bss_0079CAB8;
extern "C" void FUN_005ff5dc(u32 id)
{
    Tbl* t = &bss_0079CAB8; t->select(id);
}
