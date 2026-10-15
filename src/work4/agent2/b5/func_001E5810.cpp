// 0x1E5810: ActorMgr handle table (Game+0x3DBBC+0x20 = +0x3DBDC .. called from 0x4C4674): remove an actor's slot
typedef unsigned int u32;
struct Actor { char pad[0x2cc]; u32 mHandle; };   // index = handle >> 22

template <typename T> inline T Min(T a, T b) { return a < b ? a : b; }

struct HandleTable {
    void remove(Actor* a);
    Actor*& at(u32 i) { return i < mNum ? mPtrs[i] : mPtrs[0]; }
    u32 mNum;
    Actor** mPtrs;
    u32 mFreeHint;
    Actor** mEnd;
};

void HandleTable::remove(Actor* a) {
    u32 idx = a->mHandle >> 22;
    at(idx) = 0;
    mFreeHint = Min(mFreeHint, idx);
    Actor** it = mPtrs + idx;
    ++it;
    if (mEnd == it) {
        while (mEnd != mPtrs) {
            if (mEnd[-1] != 0)
                break;
            --mEnd;
        }
    }
}
