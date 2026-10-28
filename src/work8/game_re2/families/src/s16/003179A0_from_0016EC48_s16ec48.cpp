typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef float f32;
struct SmOwner_; typedef void (SmOwner_::*SmFunc)();
struct SmTimeline { void func_00352210(bool b, float frame); };
struct StateMgr {
  u32 mCounter; s8 mCur; s8 mNext; u8 mNum; u8 pad7[9];
  SmTimeline* mTimeline; SmOwner_* mOwner; SmFunc* mEnter; SmFunc* mExec; SmFunc* mExit;
  void execute() { StateMgr* s = this; (s->mOwner->*s->mExec[s->mCur])(); u32 c = mCounter + 1; mCounter = c; if (mTimeline) mTimeline->func_00352210(true, (float)c); }
};
struct T { u8 p0[0x40c]; StateMgr sm; };
void func_003179A0(T* self) { self->sm.execute(); }
