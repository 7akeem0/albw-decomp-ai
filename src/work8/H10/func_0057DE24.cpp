typedef unsigned int u32;
typedef int s32;

struct Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual u32 test(u32 x);
};

struct PtrArray {
    s32 num;
    s32 max;
    Item** ptrs;
    Item** begin() { return ptrs; }
    Item** end() { return ptrs + num; }
};

struct Owner {
    char p0[0x50];
    PtrArray arr;
};

extern "C" u32 func_0057DE24(Owner* self, u32 a) {
    Item** it = self->arr.begin();
    for (;;) {
        Item** e = self->arr.end();
        if (it != e) {
            if (!(*it)->test(a)) { ++it; continue; }
            return 1;
        }
        return 0;
    }
}
