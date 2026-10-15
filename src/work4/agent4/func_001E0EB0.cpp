typedef unsigned int u32;
typedef int s32;
template <typename T, s32 N>
struct SafeArray {
    T mBuffer[N];
    T& operator[](s32 i) { if ((u32)i < (u32)N) return mBuffer[i]; return mBuffer[0]; }
};
struct Entry { u32 m0; u32 m4; char pad[0x328 - 8]; };
class X {
public:
    u32 func_001E0EB0();
    char pad[0x10];
    SafeArray<Entry, 7> mEntries;
    char pad2[0x1fa0 - 0x10 - 7 * 0x328];
    s32 m1fa0;
    s32 m1fa4;
};
u32 X::func_001E0EB0() {
    if (m1fa4 <= 3)
        return 0;
    return mEntries[5 - m1fa0].m4;
}
