typedef unsigned int u32;
typedef int s32;
typedef float f32;
struct Elem { u32 pad[4]; f32 m10; };
struct Arr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    Elem* mData;
    Elem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
struct HolderC {
    u32 pad[3];
    Arr* mC;
    void setValue(f32 v);
};
void HolderC::setValue(f32 v) {
    if (mC) (*mC)[0].m10 = v;
}
