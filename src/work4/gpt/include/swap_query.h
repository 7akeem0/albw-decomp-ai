// Pass 4 matching-source view; helper names are descriptive hypotheses.
#ifndef GPT_PASS4_SWAP_QUERY_H
#define GPT_PASS4_SWAP_QUERY_H
typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
template <typename T> struct PtrArray {
    s32 mPtrNum; s32 mPtrNumMax; T** mPtrs;
    s32 size() const { return mPtrNum; }
    T* at(s32 idx) const { if ((u32)idx < (u32)mPtrNum) return mPtrs[idx]; return 0; }
    void clear() { mPtrNum = 0; }
};
template <typename T, s32 N> struct SafeArray {
    T mBuffer[N];
    T& operator[](s32 i) { if ((u32)i < N) return mBuffer[i]; return mBuffer[0]; }
};
struct VObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
};
struct Group { u32 m0; VObj* m4; u32 m8; PtrArray<VObj> mArr; char pad[0x328 - 0x18]; };
struct U32Arr { u32 a[4]; u32& operator[](s32 i) { return a[i]; } };
struct CritSec { void lock(); void unlock(); };
struct Mgr1E0 {
    char pad0[0x10];
    SafeArray<Group, 7> mGroups;          // 0x10, 0x328 each
    char pad1628[0x1fa0 - 0x1628];
    s32 m1fa0;
    char pad1fa4[0x1fb4 - 0x1fa4];
    CritSec m1fb4;
    char pad1fb5[0x1fd0 - 0x1fb5];
    void* m1fd0;
    U32Arr m1fd4;
    void func_001E0AF4();
    void* func_001E0B94(const char* a, s32 idx);
};

struct Ent { char pad[0xe4]; u8 me4; };
struct PArr { Ent* a[4]; Ent*& operator[](s32 i) { return a[i]; } };
// mEngaged is retained from the lock type: removing even its dead initializer changes allocation.
struct CondLock {
    CritSec* mLocked;
    bool mEngaged;
    CondLock(CritSec* t, bool b) : mLocked(0), mEngaged(true) {
        if (b) { mLocked = t; mLocked->lock(); }
    }
    ~CondLock() { if (mLocked) mLocked->unlock(); }
};
s32 func_00489CE0(void* p, u8* out, const char* a);
struct Result{void* v;};
#endif
