typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef signed char s8;

struct Sub {
    char _pad[0xd];
    u8 m0d;
    u8 m0e;
};

struct Pad48 { virtual void p0(); char _p[0x44]; };

struct Obj51AF38 {
    char _pad[0x48];
    void* m48[3];
    Sub* m54;
    u16 m58;
    char _pad2[0x64 - 0x5a];
    char m64[0xc];
    Sub* m70;
    u16 m74;
    char _pad3[0x80 - 0x76];
    Sub* m80;
};

void func_0012C790(void* p);
void func_001B6B38(void* p);
void func_0043D434(void* p);
void func_0029E18C(void* p, u32 a);
void* func_0058DEF4(void* self);

struct Vcall { virtual void a(); virtual void b(); virtual Sub* get(s32); };
inline Sub* get2(Obj51AF38* p,s32 idx){Vcall* q=(Vcall*)&p->m48[0];u8 k=idx;return q->get(k);}
void func_0051AF38(Obj51AF38* self) {
    u16 s = self->m58;
    Sub* p = self->m54;
    if (s != 2) {
        if (p != 0 && (p->m0d != 0 || p->m0e != 0)) {
            func_0012C790(p);
            func_001B6B38(self->m54);
        }
        Sub* q=get2(self,2);
        if (q) q->m0e = 1;
    } else {
        if (p == 0 || (p->m0d == 0 && p->m0e == 0)) p->m0e = 1;
    }

    Sub* m = self->m80;
    if (m != 0) {
        if (m->m0d == 3 && m->m0e == 3) func_0043D434(m);
    }

    if (func_0058DEF4(self) != 0) {
        if (self->m74 != 3) {
            Sub* s = self->m70;
            if (s == 0) goto next;
            if (s->m0d == 0 && s->m0e == 0) goto next;
            func_0012C790(s);
            func_001B6B38(self->m70);
        next:
            func_0029E18C((char*)self + 0x64, 3);
        }
        Sub* s2 = self->m70;
        if (s2 != 0 && s2->m0d == 0 && s2->m0e == 0) s2->m0e = 1;
    }
}
