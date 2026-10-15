// agent8: partial layout of the object whose methods live at 0x1DF478..0x1DFB30
// (model-holder @0x24, PtrArray<Anim> @0x7c, sound ids @0xe0/0xe4, flags @0x108..0x110, values @0x11c..0x134)
#ifndef A6_SNDOBJ_H
#define A6_SNDOBJ_H

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

// 0x10C7F8: value interpolator {?, f32 cur@4, f32 target@8, f32 step@0xc, u32 frames@0x10, cb@0x14}
struct Interp {
    virtual void v0();
    virtual void v1();
    virtual void calc();     // slot 2
    void set(f32 target, s32 frames);
};
void func_0010C7F8(Interp* p, s32 frames, f32 target);
void func_00489A8C(Interp* p, f32 target, f32 speed);

struct ModelSub { u32 mDummy; };
struct ModelBase0 { u8 pad[0x30]; };
struct Model : public ModelBase0, public ModelSub {};
void func_0040D5E4(Model* m);
void func_0040D5EC(Model* m, f32 v);
void func_0040E1B0(Model* m, s32 v);
void func_0040D864(Model* m, s32 v);
void func_0040D80C(Model* m);            // strb 1,[m,#0x94]
f32 func_0056A138(Model* m);             // volume getter (MoveValue at +0xb4)

// holder: {Model* mModel}; isValid / func_0048BD2C are out-of-line in another TU
struct ModelHolder {
    Model* mModel;
    void f40D5E4() { if (mModel) func_0040D5E4(mModel); }
    void f40D5EC(f32 v) { if (mModel) func_0040D5EC(mModel, v); }
    void f40E1B0(s32 v) { if (mModel) func_0040E1B0(mModel, v); }
    void f40D864(s32 v) { if (mModel) func_0040D864(mModel, v); }
    bool isValid() const;                // 0x57D86C
    void func_0048BD2C(s32 v);           // 0x48BD2C: if (mModel) mModel->...(v)
    void SetVolume(f32 v, s32 frames);   // agent6: 0x48BD2C really is nw::snd::SoundHandle::SetVolume(f32, int)
    void SetPitch(f32 v);                // agent6: 0x48BD10
    void f40D80C() { if (mModel) func_0040D80C(mModel); }
};

// 8-byte scoped accessor: ctor 0x40C5C0(this, holder), dtor 0x40C58C (clears model->m114 back-link)
struct ModelRef {
    Model* mPtr;   // agent6: only 4 bytes here (0x1DFB30 frame is sub sp,#4)
    ModelRef(ModelHolder* h);    // 0x40C5C0
    ~ModelRef();                 // 0x40C58C
};
void func_00410260(Model* m, f32 v);

template <typename T>
struct PtrArray {
    s32 mPtrNum;
    s32 mPtrNumMax;
    T** mPtrs;
    T* at(s32 idx) const {
        if ((u32)idx < (u32)mPtrNum)
            return mPtrs[idx];
        return 0;
    }
    // same semantics, other spelling: needed where orig schedules movls BEFORE the 2nd ldrhi (idx 0 sites)
    T* operator[](s32 idx) const {
        if ((u32)mPtrNum <= (u32)idx)
            return 0;
        return mPtrs[idx];
    }
};

bool func_0056A120(Model* m);
void func_00110DDC(ModelHolder* h, s32 v);
// 0x4090A0: nw::snd::SoundStartable::StartSound(SoundHandle*, u32 id, const StartInfo*) -> result (0 = ok)
struct Startable;
u8 func_004090A0(Startable* s, ModelHolder* h, s32 id, const s32* info);
struct SoundMgr;
struct SeHandle;
u8 func_00409100(s32 a, ModelHolder* h, s32 id, s32 z);
SeHandle* func_00379AEC(SoundMgr* mgr, s32 id);
void func_00322274(SeHandle* h, void* owner);
u32 func_00588174(SoundMgr* mgr, s32 id);
SeHandle* func_00379B4C(SoundMgr* mgr, s32 id, void* owner);
void func_003223B8(SeHandle* h, s32 flags);
extern SoundMgr* data_00711F50;
s32 func_00587FCC(SoundMgr* mgr, const sead::SafeString& name);


class SndObj {
public:
    char pad0[0x20];
    ModelHolder mOwnHolder;      // 0x20 (default target of mHolder)
    ModelHolder* mHolder;        // 0x24
    char pad28[0x30 - 0x28];
    u8 m30;                      // result of 0x409100 (0 = ok)
    char pad31[3];
    s32 m34;                     // agent6: StartInfo (enable flags first); &m34 passed when non-zero
    char pad38[0x7c - 0x38];
    PtrArray<Interp> mInterps;   // 0x7c
    char pad88[0xe0 - 0x88];
    s32 mE0;
    s32 mE4;
    s32 mE8;
    s32 mEC;
    s32 mF0;
    struct Delay {
        s32 mCnt;   // 0xF4 (0xFFFFFF = idle)
        s32 mArg;   // 0xF8
        void reset() { mArg = 0; mCnt = 0xffffff; }
    } mDelay;
    s32 mFC;
    f32 m100;
    f32 m104;
    s8 m108;
    s8 m109;
    s8 m10A;
    u8 m10B;
    s8 m10C;
    u8 m10D;
    u8 m10E;
    u8 m10F;
    s8 m110;     // agent6: s8 -> ldrb via hoisted this+0x100 base
    u8 m111;
    char pad112[0x114 - 0x112];
    Startable* m114;             // agent6: sound player (SoundStartable)
    f32 m118;                    // agent6: pitch
    f32 m11C;
    f32 m120;
    f32 m124;
    f32 m128;
    f32 m12C;
    f32 m130;
    f32 m134;
    void func_001DF5C4(f32 v, s32 frames);   // m124 -> interp 2
    void func_001DF744(f32 v, s32 frames);   // m130 -> interp 4
    void func_001DF80C(f32 v, s32 frames);   // m12C -> interp 3
    void func_001DF984(f32 v, s32 frames);   // m120 -> interp 1
    void func_001DF690(f32 v);               // m128 -> model
    void func_001DF6DC(f32 v, f32 speed);    // m11C -> interp 0 (489A8C)
    void func_001DF730();
    void func_001DF7A4(f32 add);
    void func_001DF678();
    void func_001DF7F0();
    void func_001DF968();
    void func_001DF950(s32 v);
    void func_001DF86C(f32 v);
    bool func_001DF8C4();
    void func_001DF8F8(const sead::SafeString& name);
    void func_001DF9E4(f32 v);
    bool func_001DF624(s32 a, const sead::SafeString& name, ModelHolder* holder);
    bool func_001E0364(s32 a, s32 id, ModelHolder* holder);
    void func_001DFA10();
    bool func_001DFB30();
    void func_001DFF84(u32 v);
    void func_001DFFA8(f32 v);
    void func_001DFFC4(f32 v, f32 speed);
    void func_001E0040(u32 v);
    struct ModelSub* func_001E007C();
    bool func_001E0090(s32 a, s32 id);
    bool func_001E0098(s32 a, s32 id, ModelHolder* holder);
};

#endif
