// Pass 4 matching-source view; helper names are descriptive hypotheses.
#ifndef GPT_PASS4_SWAP_REMOVE_H
#define GPT_PASS4_SWAP_REMOVE_H
inline void* addOffset(void* p,int off){return (void*)((char*)p+off);}
typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
namespace sead {
struct CriticalSection { void lock(); void unlock(); };   // 0x10C0B8 / 0x10EEE0
template <class T> struct ScopedLock {
    T* mLocked;
    explicit ScopedLock(T* t) : mLocked(t) { mLocked->lock(); }
    virtual ~ScopedLock() { mLocked->unlock(); }
};
struct ListNode { ListNode* mPrev; ListNode* mNext; void erase_(); };   // 0x10F1F8
struct ListImpl {
    ListNode mStartEnd; s32 mCount;
    ListNode* front() const;                          // 0x49F688
    s32 indexOf(const ListNode* n) const;             // 0x58080C
    void erase(ListNode* n) { n->erase_(); --mCount; }
};
template <class T> struct OffsetList : ListImpl {
    s32 mOffset;
    ListNode* objToListNode(T* o) const{return (ListNode*)addOffset(o,mOffset);} const ListNode* objToListNode(const T* o) const{return (const ListNode*)addOffset((void*)o,mOffset);}
    T* listNodeToObj(ListNode* n) const { return (T*)((char*)n - mOffset); }
    T* front() const { ListNode* n = ListImpl::front(); if (!n) return 0; return listNodeToObj(n); }
    s32 indexOf(const T* o) const {const int& off=mOffset; return ListImpl::indexOf((const ListNode*)addOffset((void*)o,off));}
    void erase(T* o) { ListImpl::erase(objToListNode(o)); }
};
}

struct Item { char pad[0xa0]; struct Ma0 { void f(); } ma0; };   // 0x1080D4
struct Mgr26CC {
    char pad[0x10];
    sead::OffsetList<Item> mList;      // 0x10
    char pad20[0x30 - 0x20];
    sead::CriticalSection mCS;         // 0x30
    void remove(Item* o);
    void clear();
};
#endif
