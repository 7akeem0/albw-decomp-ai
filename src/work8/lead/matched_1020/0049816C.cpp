extern "C" void func_0010F1F8(void *node);
struct OffsetList {
    char pad[0x154];
    int mCount;
    int mOffset;
    void erase(void *obj) { func_0010F1F8((void *)((unsigned)obj + mOffset)); --mCount; }
};
struct Obj {
    char pad[0x140];
    OffsetList *mList;
    void leave() { if (mList != 0) { mList->erase(this); mList = 0; } }
};
extern "C" void func_0049816C(Obj *o) { o->leave(); }
