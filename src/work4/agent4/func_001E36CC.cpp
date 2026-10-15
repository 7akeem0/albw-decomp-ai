typedef int s32;
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
};
template <typename T>
struct PtrArray {
    s32 mPtrNum;
    s32 mPtrNumMax;
    T** mPtrs;
    T** begin() const { return mPtrs; }
    T** end() const { return mPtrs + mPtrNum; }
};
class X {
public:
    void func_001E36CC();
    char pad[0x34];
    PtrArray<Obj> mArr;
};
void X::func_001E36CC() {
    for (Obj** it = mArr.begin(), **e = mArr.end(); it != e; ++it)
        (*it)->v18();
}
