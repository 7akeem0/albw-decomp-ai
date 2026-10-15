#include "sead_list_a1.h"
struct Item { char pad[0xa0]; struct Ma0 { void f(); } ma0; };   // 0x1080D4
struct Mgr26CC {
    char pad[0x10];
    sead::OffsetList<Item> mList;      // 0x10
    char pad20[0x30 - 0x20];
    sead::CriticalSection mCS;         // 0x30
    void remove(Item* o);
    void clear();
};
void Mgr26CC::remove(Item* o) {
    sead::ScopedLock<sead::CriticalSection> lock(&mCS);
    if (mList.indexOf(o) >= 0)
        mList.erase(o);
}
void Mgr26CC::clear() {
    sead::ScopedLock<sead::CriticalSection> lock(&mCS);
    while (Item* o = mList.front())
        o->ma0.f();
}
