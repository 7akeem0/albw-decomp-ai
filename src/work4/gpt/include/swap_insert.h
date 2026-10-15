// Pass 4 matching-source view; helper names are descriptive hypotheses.
#ifndef GPT_PASS4_SWAP_INSERT_H
#define GPT_PASS4_SWAP_INSERT_H
typedef int s32;
typedef unsigned char u8;
struct ListNode {
    ListNode* mPrev;
    ListNode* mNext;
    void insertFront_(ListNode* n);   // 0x10F1DC
};
struct ListImpl {
    ListNode mStartEnd;
    s32 mCount;
    void pushBack(ListNode* n) { mStartEnd.insertFront_(n); ++mCount; }
};
template <typename T>
struct OffsetList : public ListImpl {
    s32 mOffset;
    ListNode* objToListNode(T* obj) const { return reinterpret_cast<ListNode*>(reinterpret_cast<u8*>(obj) + mOffset); }
    void pushBack(T* obj);
};
template<class T> void OffsetList<T>::pushBack(T* obj){ListImpl::pushBack(objToListNode(obj));}
struct CriticalSection {
    void lock();     // 0x10C0B8
    void unlock();   // 0x10EEE0
};
template <typename T>
struct ScopedLock {
    ScopedLock(T* l) : mLocked(l) { mLocked->lock(); }
    virtual ~ScopedLock() { mLocked->unlock(); }
    T* mLocked;
};
struct ObjA0 {
    void func_0010A8D4();
    bool func_0010A884();
    void func_0010A7BC();
};
struct Item {
    char pad[0xa0];
    ObjA0 ma0;
};
struct Cls2664 {
    char pad[0x10];
    OffsetList<Item> mList;   // +0x10
    char pad20[0x30 - 0x20];
    CriticalSection mCS;      // +0x30
    void func_001E2664(Item* item);
};
#endif
