typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
namespace sead {
struct CriticalSection { void lock(); void unlock(); };   // 0x10C0B8 / 0x10EEE0
template <class T> struct ScopedLock {
    T* mLocked;
    explicit ScopedLock(T* t) : mLocked(t) { mLocked->lock(); }
    ~ScopedLock() { mLocked->unlock(); }
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
    ListNode* objToListNode(T* o) const { return (ListNode*)((char*)o + mOffset); }
    T* listNodeToObj(ListNode* n) const { return (T*)((char*)n - mOffset); }
    T* front() const { ListNode* n = ListImpl::front(); if (!n) return 0; return listNodeToObj(n); }
    s32 indexOf(T* o) const { return ListImpl::indexOf(objToListNode(o)); }
    void erase(T* o) { ListImpl::erase(objToListNode(o)); }
};
}
