





typedef unsigned int u32;

struct Head {
    u32 m0;
    u32 m4;
    u32 m8;
    u32 mc;
};

struct Node {
    u32 m0;
    u32 m4;
};

struct Self {
    char p0[0x24];
    Head b;
};

u32 func_0052EF04(u32 x, u32 a1);

u32 func_0054722C(Self* self, u32 a1) {
    if (self->b.m8 == 0) {
        return 0;
    }
Head* head=&self->b;u32 off=self->b.mc;u32 front=self->b.m4;u32 x=front-off;__memory_changed();u32 sentinel=(u32)head-head->mc;
    while(x!=sentinel){
        if (func_0052EF04(x, a1) != 0) {
            return 1;
        }
        Node* n = (Node*)(x + off);
        x = n->m4 - off;
}
    return 0;
}
