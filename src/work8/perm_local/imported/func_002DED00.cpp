





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

void func_001DFEE0(u32 x, u32 a1);

void func_002DED00(Self* self, u32 a1) {
  int perm_t21;
    if ((perm_t21 = self->b.m8) == 0) {
        return;
    }
Head* head=&self->b;
u32 off=self->b.mc;
u32 front=self->b.m4;
u32 x=front-off;
__memory_changed();
u32 sentinel=(u32)head-head->mc;
    if (x == sentinel) {
        return;
    }
    do {
        u32 x_c11 = x;
        func_001DFEE0(x_c11, a1);
        Node* n = (Node*)(x + off);
        x = n->m4 - off;
    }
while (x != sentinel);
}
