// for i in 0..2: p = arr[i] (SafeArray<Item*,3>, bounds-checked); if (!p) continue; if (arr[i]->mb4) return true; return false.
typedef unsigned char u8;
struct Item { char p0[0xb4]; u8 mb4; };
struct Arr3 {
    Item* mBuf[3];
    Item* get(int i) { Item** p = mBuf; if ((unsigned)i < 3) p = &mBuf[i]; return *p; }
};
struct Owner { char p0[0xa4]; Arr3 mArr; };
bool func_0058E1A8(Owner* self) {
    for (int i = 0; i < 3; ++i) {
        if (self->mArr.get(i) == 0) continue;
        if (self->mArr.get(i)->mb4 != 0) return true;
    }
    return false;
}
