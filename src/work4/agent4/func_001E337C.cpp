typedef unsigned char u8;
typedef int s32;

struct PtrArrayImpl {
    s32 mPtrNum;
    s32 mPtrNumMax;
    void** mPtrs;
    void erase(s32 position, s32 num);   // 0x48C320
};
template <typename T>
struct PtrArray : public PtrArrayImpl {
    s32 indexOf(const T* p) const {
        for (s32 i = 0; i < mPtrNum; ++i) {
            if (mPtrs[i] == p)
                return i;
        }
        return -1;
    }
    bool isEmpty() const { return mPtrNum == 0; }
    void pushBack(T* p) {
        if (mPtrNum < mPtrNumMax) {
            mPtrs[mPtrNum] = p;
            ++mPtrNum;
        }
    }
    void erase(s32 position) { PtrArrayImpl::erase(position, 1); }
};

struct Item {
    char pad[0xe];
    u8 m0e;
};
void func_00369E80(Item* it);

class X {
public:
    void func_001E337C();
    char pad[0x34];
    PtrArray<Item> mArr34;
    char pad40[0x50 - 0x40];
    PtrArray<Item> mArr50;
    char pad5c[0x70 - 0x5c];
    Item* m70;
};

void X::func_001E337C() {
    Item* it = m70;
    if (it) {
    s32 idx = mArr50.indexOf(it);
    if (idx != -1) {
        if (idx == 0)
            func_00369E80(it);
        return;
    }
    if (mArr50.isEmpty())
        it->m0e = 1;
    mArr50.pushBack(m70);
    mArr34.erase(mArr34.indexOf(m70));
    }
}
