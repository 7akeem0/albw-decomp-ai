typedef unsigned int u32;

struct Fobj { void (*f)(void* self); };
struct N2 { char p0[0x18]; struct Node* m18; };
struct Node { char p0[0x10]; N2* m10; };
struct Lk;
struct Obj {
    char p0[0x14];
    Node* m14;
    char p1[0x2c - 0x18];
    Fobj* m2c;
    char p2[0x3c - 0x30];
    Lk* m3c;
    char p3[0x44 - 0x40];
    u32 m44;
};

void func_0010C0B8(Lk* l);
void func_0010EEE0(Lk* l);
void func_00490BD8(N2* n);

extern "C" void func_00490B60(Obj* self) {
    if (self->m3c != 0) func_0010C0B8(self->m3c);
    if ((self->m44 & 1) == 0) {
        Fobj* h = self->m2c;
        h->f(&self->m2c);
    }
    Node* n = self->m14;
    if (n != 0 && (int)(self->m44 << 30) >= 0) {
        do {
            func_00490BD8(n->m10);
            n = n->m10->m18;
        } while (n != 0);
    }
    if (self->m3c != 0) func_0010EEE0(self->m3c);
}
