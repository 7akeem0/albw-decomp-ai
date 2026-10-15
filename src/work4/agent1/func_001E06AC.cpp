typedef unsigned int u32; typedef signed int s32;
// 0x1E06AC: owner unknown (called from 0x4EF06C). Exchange element i of a u32 array at +0x1FD4.
// The original computes the address twice (load via this+i*4+0x1fd4, store via [this+0x1fd4, i lsl #2]):
// that is an array WRAPPER with operator[] returning a reference (plain array / getter+setter all CSE it).
struct U32Arr { u32 a[4]; u32& operator[](s32 i) { return a[i]; } };
struct Obj1E06AC { char pad[0x1fd4]; U32Arr m1fd4; u32 func_001E06AC(s32 i, u32 v); };
u32 Obj1E06AC::func_001E06AC(s32 i, u32 v) {
    u32 old = m1fd4[i];
    m1fd4[i] = v;
    return old;
}
