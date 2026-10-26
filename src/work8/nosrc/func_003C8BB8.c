typedef unsigned int u32;
struct C { u32* vtbl; };
typedef u32 (*Fn)(struct C*);
u32 f(struct C* c) {
    if (!c) return 0xE0E046BC;
    return ((Fn*)c->vtbl)[5](c);
}
