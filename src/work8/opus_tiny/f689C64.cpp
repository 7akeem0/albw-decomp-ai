// 0x689C64: sead-style ListImpl ctor (vec_ctor element ctor): node ctor nulls, count 0, then self links
typedef int s32;
struct ListNode { ListNode* mPrev; ListNode* mNext; ListNode() : mPrev(0), mNext(0) {} };
struct ListImpl { ListNode mStartEnd; s32 mCount; ListImpl(); };
ListImpl::ListImpl() : mStartEnd(), mCount(0) { mStartEnd.mNext = &mStartEnd; mStartEnd.mPrev = &mStartEnd; }
