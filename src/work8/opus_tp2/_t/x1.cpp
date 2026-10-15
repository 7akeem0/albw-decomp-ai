





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
    char p0[0x14];
    Head b;
};

void func_00258F24(u32 x, u32 a1);

void func_002972C0(Self* self, u32 a1) {
    if (self->b.m8 == 0) {
        return;
    }
Head* head=&self->b;u32 off=self->b.mc;u32 front=self->b.m4;u32 sentinel=(u32)head-head->mc;u32 x=front-off;
    if (x == sentinel) {
        return;
    }
    do {
        func_00258F24(x, a1);
        Node* n = (Node*)(x + off);
        x = n->m4 - off;
    } while (x != sentinel);
}
