// 0x6874D4: sead-style OffsetList default ctor (vec_ctor element ctor): ListImpl() then mOffset(-1)
typedef int s32;
struct ListNode { ListNode* mPrev; ListNode* mNext; ListNode() : mPrev(0), mNext(0) {} };
struct ListImpl { ListNode mStartEnd; s32 mCount;
  ListImpl() : mStartEnd(), mCount(0) { mStartEnd.mNext = &mStartEnd; mStartEnd.mPrev = &mStartEnd; } };
struct OffsetList_6874D4 : ListImpl { s32 mOffset; OffsetList_6874D4(); };
OffsetList_6874D4::OffsetList_6874D4() : mOffset(-1) {}
