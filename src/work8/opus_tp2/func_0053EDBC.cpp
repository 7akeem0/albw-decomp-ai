#include "../../work7/ds7/range.h"
struct U { char pad[8]; f32 m8; u32 mC; f32 m10; f32 m14; u32 m18; u8 m1c; };
struct T { char pad[0xc]; s32 mNum; s32 mMax; U* mData;
    U& operator[](s32 i){ if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; } };
struct X { char pad[0x10]; T* m7ac; };
inline bool chk(U* u, u32 c){ (void)c; if (u->m1c) return false; if (u->m10 >= 0.0f) return u->m8 == u->m14; return u->m8 <= 0.0f; }
bool f(X* p){ return chk(p->m7ac->mData, 0); }
