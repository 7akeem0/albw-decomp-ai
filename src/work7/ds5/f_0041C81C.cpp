// 0x41C81C
struct Node { void* mPrev; void* mNext; };
struct List {
    int mCount;
    Node mStartEnd;
    List() : mCount(0) {
        mStartEnd.mPrev = &mStartEnd;
        mStartEnd.mNext = &mStartEnd;
    }
};
List* getList() {
    static List list;
    return &list;
}
