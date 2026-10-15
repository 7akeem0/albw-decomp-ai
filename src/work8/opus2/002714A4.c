typedef unsigned int u32; typedef int s32; typedef unsigned char u8;
struct T;
typedef struct TVt { void* f0; void* f4; void (*f8)(struct T*); } TVt;
typedef struct T { TVt* vt; u32 m4; } T;
struct Handler;
typedef struct HVt { void* f0; void (*f4)(struct Handler*, void*); } HVt;
typedef struct Handler { HVt* vt; } Handler;
typedef struct G74F { u8 pad[0x18]; T m18; } G74F;
typedef struct Sub7CA8 { u8 pad[0x14]; u32 m14; } Sub7CA8;
typedef struct Self { u8 pad[0x1c]; s32 m1c; u8 pad2[0x7ca8 - 0x20]; Sub7CA8* m7ca8; } Self;
typedef struct Buf8 { u32 a, b; } Buf8;

extern G74F data_0074F78C;
extern void* data_0070BB18;
void func_003C7A20(Buf8*, u32);
void func_003C7A70(Buf8*);
int func_00560EF8(Buf8*, Buf8*, u32);
_Bool func_005610A8(Buf8*, Buf8*, s32);
int func_00560E74(Buf8*, Buf8*, u32);
Handler* func_00272128(Self*, T*, int, int);
void func_002725D8(Self*);
void func_0016A91C(void*, s32);
void func_00270E38(Self*, s32);

static u32 getM4(T* t) { t->vt->f8(t); return t->m4; }

void func_002714A4(Self* self, T* p)
{
    Buf8 b38, b30, b28, b20;
    s32 i;
    void* g;
    func_003C7A20(&b28, self->m7ca8->m14);
    func_003C7A70(&b30);
    if (func_00560EF8(&b28, &b30, getM4(p)) != 0) {
        func_003C7A70(&b38);
        i = 0;
        while (func_005610A8(&b30, &b38, i)) {
            if (func_00560E74(&b38, &b20, getM4(&data_0074F78C.m18)) != 0) {
                Handler* h = func_00272128(self, p, 0, 1);
                h->vt->f4(h, &b38);
            }
            i++;
        }
    }
    func_002725D8(self);
    g = data_0070BB18;
    func_0016A91C(g, -1);
    func_00270E38(self, -1);
    for (i = 0; i < self->m1c; i++) {
        func_0016A91C(g, i);
        func_00270E38(self, i);
    }
}
