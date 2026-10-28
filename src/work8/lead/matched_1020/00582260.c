struct Item { char pad[0x20]; };
struct Group {
    int count;
    char pad[0xE4];
    unsigned itemNum;
    struct Item *items;
    char pad2[0x16C - 0xF0];
};
struct GroupTable { struct Group groups[0x40]; };
struct Owner {
    char pad[0x44];
    struct GroupTable table;
};
static struct Group *groupAt(struct GroupTable *t, unsigned g)
{
    if (g >= 0x40) g = 2;
    return &t->groups[g];
}
struct Item *func_00582260(struct Owner *o, unsigned g, int i)
{
    struct Group *grp = groupAt(&o->table, g);
    int n = grp->count;
    if (i < 0 || i >= n) i = 0;
    return (unsigned)i < grp->itemNum ? &grp->items[i] : grp->items;
}
