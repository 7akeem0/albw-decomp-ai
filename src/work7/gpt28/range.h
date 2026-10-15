#ifndef GPT28_RANGE_H
#define GPT28_RANGE_H
typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Slot64 { char pad0[5]; u8 active; char pad6[0x3A]; };
template<class T, int N> struct FixedSlots {
    T slots[N];
    T& operator[](s32 index) { if ((u32)index < N) return slots[index]; return slots[0]; }
};
struct SlotOwner4C6 {
    u32 m0;
    FixedSlots<Slot64, 20> m4;
    char pad504[0x18];
    Slot64* m51c;
    void select(s32 index);
};
struct Object3C4 { char pad0[0x3c4]; u32 state; };
struct Holder24 { char pad0[0x24]; Object3C4* object; };
struct Owner4C90 {
    char pad0[0x10]; Holder24* holder;
    char pad14[0x284]; u8 active;
    void clear();
};
struct Object4D08 {
    char pad0[0x74]; f32 x, y, z;
    char pad80[0xe4]; u32 flags;
    void setScale(f32 scale);
    void markDirty();
    void writeScale(f32 scale);
};
struct Item8 { u32 m0, m4; };
struct Buffer8 {
    s32 count; Item8* data;
    Item8& operator[](s32 i) { if ((u32)i < (u32)count) return data[i]; return data[0]; }
};
struct Object4D74 {
    char pad0[0x61c]; Buffer8 buffer;
    char pad624[0x15]; u8 active;
    u32 get() const;
};
struct Object4E4E { char pad0[0x36]; u16 enabled; void reset(); };
struct Sub4DC { u32 value; };
struct Object4E85 { char pad0[0x46c]; u32 earlyState; char pad470[0x68]; void* child; Sub4DC sub; u32 reset(); void update(); };
struct Object4E98 { char pad0[0x4c]; void* child; char pad50[0x30]; u8 active; void reset(); };
struct Object4E9C { char pad0[0x50]; void* child; char pad54[0x2c]; u8 active; void reset(); };
struct Flags84 { char pad0[0x84]; u8 a, b, c; };
struct Object4EB1 { char pad0[0x38]; void* m38; u32 m3c; Flags84* m40; void enable(); };
struct Reset78 { u32 value; };
struct Child4EB3 { char pad0[0x78]; Reset78 reset; char pad7c[0x5f]; u8 active; };
struct Object4EB3 { char pad0[0x50]; Child4EB3* child; void reset(u8 value); };
struct Object4ED5 {
    char pad0[0x10]; u32* audio; char pad14[0x78]; u32 current, previous; u8 dirty;
    u8 flag95, flag96, flag97;
    char pad98[0x49]; u8 flagE1, flagE2;
    void set(u32 value); void enable(); void resetAudio();
};
struct Vec3 { f32 x, y, z; };
struct Object4EFA { char pad0[0x54]; Vec3 value; u32 m60; u8 active; void set(const Vec3&); };
struct Child1C { char pad0[0x1c]; u32 value; };
struct Object4F87 { char pad0[0x420]; Child1C* first; u32 m424; Child1C* second; void set(u32); };
struct BitFlag32 {
    u32 value;
    bool isOn(u32 mask) const { return (value & mask) != 0; }
    void change(u32 mask, bool on) { if(on) value |= mask; else value &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void reset(u32 mask) { change(mask, false); }
};
struct Object4FB2 { char pad0[0x5a0]; BitFlag32 flags; void mark(); };
struct AnimElement { char pad0[0x10]; f32 rate, value; };
struct AnimArray {
    char pad0[0xc]; s32 count, capacity; AnimElement* data;
    AnimElement& operator[](s32 i) { if ((u32)i < (u32)count) return data[i]; return data[0]; }
};
struct Object4FB3 { char pad0[0x410]; AnimArray* array; void set(f32); void setRate(f32); };
struct Object4FC5 { char pad0[0x924]; u32 value; void update(); };
struct Arg21 { char pad0[0x21]; u8 kind; };
struct Object4FF2 { char pad0[0x30]; u16 kind; char pad32[0x56a]; BitFlag32 flags; void mark(); };
struct Object500E { char pad0[0x8c0]; u8 active; f32 get() const; };
struct Object500F { char pad0[0x3e0]; f32 verticalSpeed; void update(); };
struct CopyVec3 {
    f32 x, y, z;
    CopyVec3& operator=(const CopyVec3& other) { x=other.x; y=other.y; z=other.z; return *this; }
};
struct Object5015 { char pad0[0x3d0]; CopyVec3 position; char pad3dc[0x69c]; CopyVec3 saved; void update(u32); };
struct Callback { virtual void invoke(); };
struct Object5027 { char pad0[0x18]; Callback* callback; void invoke(); };
struct Object516F { char pad0[0x3a0]; u32 id; char pad3a4[0x8d8]; void* child; u32 invoke(u32); };
struct Child177 { char pad0[0x177]; u8 flags; };
struct Object5194 { char pad0[0xe4]; Child177* child; void clear(); };
struct Callback25 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(u32);
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void invoke();
};
struct Object51AE { char pad0[0x20]; Callback25* callback; void invoke(); void invokeArg(u32); };
struct PlayerPositionMgr { char pad0[0x1c]; Vec3* position; };
extern PlayerPositionMgr* data_0070FB60;
struct Object5211 { char pad0[0x3d0]; Vec3 position; char pad3dc[0xc]; u32 angle; u32 get(); };
struct Object52EB { char pad0[0x614]; void* child; bool test(); };
struct Object52FD { char pad0[0x478]; CopyVec3 position; void get(CopyVec3*) const; };
struct Object5302 { char pad0[0x3d0]; CopyVec3 position; char pad3dc[0x99]; u8 active; char pad476[0x30e]; u16 gate; char pad786[6]; u8 mode; u8 get() const; void getPosition(CopyVec3*) const; };
struct Object5319 { char pad0[0x2e]; u16 flag; f32 get() const; };
struct Arg2CC { char pad0[0x2cc]; u32 id; };
struct Object5328 { char pad0[0x278]; u32 id; bool test(const Arg2CC*); };
struct Item48 { char data[0x30]; };
struct Array14 { char pad0[0x14]; Item48* items; };
struct HolderArray24 { char pad0[0x24]; Array14* array; };
struct Object53EC {
    char pad0[0x10]; HolderArray24* holder; char pad14[0x68]; s32 index, nextIndex;
    char pad84[0xc]; s32 index90; char pad94[0xc]; s32 indexA0;
    Item48* get(); Item48* getNext(); Item48* get90(); Item48* getA0();
};
struct Request18 { u32 m0, m4, m8, mC, m10, m14; Request18(u32, u32); };
struct Request15 { u32 m0, m4, m8, mC, m10; u8 m14; Request15(u32, u32); };
struct Object4AF3 { u32 m0; const u32* table; u32 m8, mC; Object4AF3(u32); };
struct Positions2C8 {
    char pad0[0x68]; Vec3 first; char pad74[0x180]; Vec3 second;
    char pad200[0xc8]; u32 flags;
};
struct PositionHolder { Positions2C8* child; };
struct Object51E5 { char pad0[0x28d0]; PositionHolder holder[1]; Vec3* get(); };
struct BitArray {
    u32 words[8];
    bool test(u32 index) const { if(words[index >> 5] & (1u << (index & 31))) return true; return false; }
};
struct Object52A1 { char pad0[0x13c]; BitArray flags; bool test(u32) const; };
struct Object537B { char pad0[0x28]; u32 values[45]; u32 get(s32) const; };
struct Vec4 { f32 x, y, z, w; };
struct Object4950 { char pad0[0x14]; Vec4 first, second; u8 active; Object4950& set(const Vec4&, const Vec4&); Object4950& clear(const Vec4&, const Vec4&); };
struct Mtx44 { f32 values[16]; void copy(const Mtx44&); };
struct Object496F { char pad0[0x48b4]; Mtx44 matrix; void set(void*); };
struct SignedIndex18 { char pad0[0x18]; s8 index; };
struct Item364 { u32 words[91]; };
struct Object4AD7 { char pad0[0x44]; Item364 items[2]; u32 get(); };
namespace sead28 {
struct SafeString { const char* text; virtual ~SafeString() {} SafeString(s32); };
}
struct PackedArg20 { char pad0[0x20]; u16 packed; };
struct Sub788 { u32 value; };
struct Object4D93 { char pad0[0x788]; Sub788 state; void update(); };
struct Object4E03 { char pad0[0x410]; void* child; char pad414[0x58]; u32 state; void update(); };
struct ActorLookup28 { u32 value; };
struct ActorMgr28 { char pad0[0x3dbbc]; ActorLookup28 lookup; };
extern ActorMgr28* data_00706E20;
struct CounterPair { u32 current, maximum; };
struct Object4E4C { char pad0[0x2d7]; u8 active; char pad2d8[0x1d0]; CounterPair counter; void update(); };
struct Object4E52 { char pad0[0x4cc]; void* child; char pad4d0[0x5c]; u32 state; void update(); };
struct Object4EA0 { char pad0[0x4c]; void* first; void* second; void set(u32); void setAlt(u32); };
struct Object4EAE { char pad0[0x34]; void* child; char pad38[0x28]; BitFlag32 flags; void update(); };
struct AudioMgr28 { char pad0[0x10]; u32 state; };
struct Object4EF6 { char pad0[0xd4]; void* resource; void set(const void*); };
struct Object4F23 {
    char pad0[0x3dc]; Vec3 velocity; char pad3e8[0x4ec]; u32 state;
    char pad8d8[0x3c]; f32 speed; u32 m918; u8 active;
    void update(); void stop();
};
struct Vec3Ctor { f32 x,y,z; Vec3Ctor(f32 a,f32 b,f32 c):x(a),y(b),z(c){} };
struct Object4FAB { char pad0[0x4b8]; f32 zero; Vec3Ctor vector; f32 value; void set(f32); };
struct Object4FBA { char pad0[0x510]; void* child; void forward(u32,u32,s32,f32,f32,s32,u32,u32); };
struct Child5 { char pad0[5]; u8 kind; };
struct ArgWord20 { char pad0[0x20]; u32 value; };
struct Object51E9 { Child5* child; u32 m4; u32 payload; void apply(const ArgWord20*); };
struct Value4 { u32 m0, value; };
struct Holder14 { char pad0[0x14]; Value4* child; u32 get(); };
struct Object522D { char pad0[0xf74]; Holder14* holder; u32 get(); };
struct ResourceC8 { char pad0[7]; u8 index; char pad8[0xc0]; u32* flags; };
struct ResourceHolder { ResourceC8* resource; };
struct Object5235 { char pad0[0x94]; ResourceHolder* holder; bool test() const; };
struct FarArray {
    char pad0[0x18]; u32 count; u32* data;
    u32& operator[](u32 i) { u32 n=count; u32* p=data; if(n > i) p += i; return *p; }
};
struct Object53AD { char pad0[0x7ac0]; FarArray array; u32* get(u32); };
struct String4A6C { const char* text; void set(const char*); };
struct Timer4E22 { u32 current, count; f32 rate; void start(u32 initial, u32 limit, f32 rate); };
struct Object4E22 { char pad0[0x514]; Timer4E22 timer; void start(); };
struct Object4E01 { char pad0[0x3dc]; Vec3 velocity; void update(); };
struct Object4B99 { char pad0[0x68]; u32 value; };
struct Object4C90A { char pad0[0x10]; void* first; char pad14[0x1c]; void* second; };
struct Object511A {
    char pad0[0x430]; void* selected;
    char pad434[0x12]; u16 flags;
    char pad448[0x74]; u8 mode;
    char pad4bd[0x2b]; u32 state;
    void initialize();
};
struct Object513C { char pad0[0x4c8]; u8 active; char pad4c9[0x53]; void* child; char pad520[0x28]; u8 mode; void activate(); };
struct Object5161 { char pad0[0x454]; Timer4E22 timer; void start(); };
struct FlagsDE { char pad0[0xd]; u8 first, second; };
struct FlagHolder51E5 { FlagsDE* child; };
struct Object51E520 { char pad0[0x1434]; FlagHolder51E5 holders[1]; bool test() const; };
struct State5264 { char pad0[0x94]; u8 mode; char pad95[0x33]; u16 gate; u32 get() const; };
struct Object5264 { char pad0[0x400]; State5264 state; u32 get() const; };
struct Object537C { char pad0[0x28]; u32 enabled[27]; u32 values[45]; u32 get(s32) const; };
struct ResourceHeader4A6B { char pad0[0x1c]; const char* strings; };
struct ResourceEntry4A6B { char pad0[0x3c]; u32 nameOffset; u32 last; const char* name(ResourceHeader4A6B*); };
struct Resource4A6B { ResourceHeader4A6B* header; char pad4[0xc]; ResourceEntry4A6B* entries; const char* name(u32); };
struct Child4ACD { char pad0[0x11c]; u32 values[8]; };
struct Object4ACD { char pad0[0x40]; Child4ACD* child; void clear(); };
struct Object4DB7 { char pad0[0x8ac]; BitFlag32 flags; char pad8b0[0xf8]; u32 state; char pad9ac[0xe]; u16 timer; char pad9bc[2]; u8 first, second; void reset(); };
struct Object4F94 { char pad0[0x5a0]; BitFlag32 flags; char pad5a4[0x288]; CopyVec3 position; bool set(const CopyVec3&); };
struct State5163 { s32 current; };
struct Object5163 { char pad0[0x414]; State5163 state; void update(); };
struct Object4FAC { char pad0[0x40c]; void* model; char pad410[8]; void* controller; char pad41c[0xc4]; u32 option; void update(u32,u32); };
struct Frame4FB0 { char pad[8]; f32 frame; char gap[0x1a]; u8 dirty; void set(f32 v){if(frame!=v){frame=v;dirty=1;}} };
struct Frames4FB0 { char pad[0xc]; s32 count,capacity; Frame4FB0* data; Frame4FB0& operator[](s32 i){if((u32)i<(u32)count)return data[i];return data[0];} };
struct Object4FB0 { char pad[0x418]; Frames4FB0* frames; void set(f32); };
#endif
