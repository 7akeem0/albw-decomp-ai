typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;

struct Task {
    s8 kind;      // +0x18
    u8 pad[3];
    u32 val;      // +0x1c
};

struct Obj {
    u8 pad0[0xcc];
    u8 mcc[4];               // +0xcc  (StateMgr)
    u8 b0d0;                 // +0xd0
    u8 pad0d1[0x210 - 0xd1];
    void* p210;              // +0x210
    void* p214;              // +0x214
    void* p218;              // +0x218
    u8 pad21c[0x30f - 0x21c];
    u8 b30f;                 // +0x30f
};

extern u8* data_00709DF8;

extern "C" void func_0047AF5C(void*);
extern "C" void func_0066E7A0(void*, s8);
extern "C" void* func_0010BAB4(u32);
extern "C" void* func_0044F7D0(void*);
extern "C" void* func_004873FC(void*);
extern "C" void func_004B9958(void*, u32);

extern "C" void func_00478068(Obj* self) {
    if (self->b30f == 0) {
        func_0047AF5C(self);
    }
    if (self->b0d0 == 4) {
        func_0066E7A0((u8*)self + 0xcc, 0);
    }
    Task* p = (Task*)data_00709DF8;
    if (p == 0) return;
    Task* t = (Task*)((u8*)p + 0x18);
    if (self->p214 == 0) {
        if (t->kind == 2) {
            if (t->val == 0) goto L214;
        } else if (t->kind == 4) {
            if (t->val == 0x11) goto L214;
        }
        goto after214;
    L214:
        {
            void* o = func_0010BAB4(0x9c);
            if (o != 0) o = func_0044F7D0(o);
            self->p214 = o;
            func_004B9958(o, 4);
        }
    }
after214:
    if (self->p210 == 0) {
        if (t->kind == 2 && t->val == 0) {
            void* o = func_0010BAB4(0x9c);
            if (o != 0) o = func_0044F7D0(o);
            self->p210 = o;
            func_004B9958(o, 4);
        }
        if (self->p210 == 0) {
            if (self->p214 == 0) return;
        }
    }
    if (self->p218 == 0) {
        void* o = func_0010BAB4(0x84);
        if (o != 0) o = func_004873FC(o);
        self->p218 = o;
        func_004B9958(o, 4);
    }
}
