
struct A { char pad[0x78]; unsigned long long v; };
int f(A* a, A* b){ if (a->v<b->v) return -1; return (a->v!=b->v)?1:0; }
