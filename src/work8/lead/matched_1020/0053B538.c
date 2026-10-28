struct Node { char pad[0x20]; unsigned count; char pad2[4]; unsigned *data; };
struct Table { unsigned num; char pad[4]; struct Node **nodes; };
struct Owner { char pad[0x15B4C]; struct Table table; };
unsigned func_0053B538(struct Owner *o, int i, int j)
{
    struct Table *t;
    struct Node *n;
    if (i < 0 || j < 0) return 0;
    t = &o->table;
    if (t->num <= (unsigned)i) return 0;
    n = t->nodes[i];
    if (n == 0 || n->data == 0) return 0;
    if (n->count > (unsigned)j) return n->data[j];
    return 0;
}
