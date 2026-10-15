

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
typedef long long s64;
extern "C" void func_0010AC24(u32,u32);
inline void diagnoseResult(u32 result,u32 pc) {
    u32 sign = result >> 31;
    if (sign) func_0010AC24(result,pc);
}
struct Vec3 {
    f32 x, y, z;
    void setDiv(const Vec3&, f32);
    void setMul(const Vec3&, f32);
};
struct ModelScale {
    char pad0[0x74];
    f32 scaleX, scaleY, scaleZ;
    char pad80[0x164-0x80];
    u32 dirty;
    void setX(f32 v) { scaleX = v; }
    void setYZ(f32 v) { scaleY = v; scaleZ = v; }
    void setScale(f32 v) { dirty |= 0x40000000; setX(v); setYZ(v); }
};
struct ActorScale {
    char pad0[0x410];
    ModelScale* model;
    char pad414[0x514-0x414];
    f32 scale;
};
struct OffsetList {
    void* first;
    void* last;
    u32 count;
    s32 offset;
};
struct OffsetListOwner {
    char pad0[0x14];
    OffsetList list;
};
struct StateMgrSmall {
    u32 count;
    s8 current, next;
    u8 num, reserved;
    s32 nameCount;
    void* nameBuffer;
    u32 flags;
    StateMgrSmall();
};
struct StateMgrBlock : StateMgrSmall { void* owner; void* enter; void* execute; void* exit; };
struct ListNode { ListNode* prev; ListNode* next; };
struct IntrusiveList { u32 count; ListNode sentinel; };
struct ListOwner112 { char pad0[0xc]; IntrusiveList list; };
struct ListItem112 { char pad0[0x104]; ListNode node; };
struct FlagChild44 {
    char pad0[0x44];
    u8 flag;
    void setFlag(u8 v) { flag = v; }
};
struct Actor138 {
    char pad0[0x430];
    void* model;
    FlagChild44* child;
};
struct Matrix33 { f32 v[9]; };
struct Matrix34 { f32 v[12]; };
struct SafeStringView {
    virtual ~SafeStringView();
    virtual void assureTermination() const;
    const char* text;
};
struct TextOwner { char pad0[8]; void* child; };
struct ArrayCounts { s32 num,max; };
struct WordArray { ArrayCounts counts; u32* data; };
struct ArrayOwner12F { char pad0[0x207c]; WordArray array; };
struct ObjectListNode { ObjectListNode* prev; ObjectListNode* next; void* object; };
struct ObjectListOwner { char pad0[0x50]; ObjectListNode sentinel; };
struct ByteResourceEntry16 { u8* data; u32 capacity; u32 size; u32 reserved; };
struct ByteResourceOwner { char pad0[0xc]; ByteResourceEntry16* entries; u32 index; };
struct ActorVec124 {
    char pad0[0x374]; Vec3 source;
    char pad380[0x3dc-0x380]; Vec3 velocity;
};
struct OffsetOwnerB7 { char pad0[0x20]; OffsetList list; };
struct OffsetItemB7 { char pad0[0x1c]; OffsetOwnerB7* owner; };
struct BitFlag16 {
    u16 value;
    BitFlag16(u16 v) : value(v) {}
    void reset(u16 mask) { *this = BitFlag16(value & ~mask); }
};
struct Child12CE { char pad0[0x16]; BitFlag16 flags; };
struct Owner12CE { char pad0[0x14]; Child12CE* child; char pad18[0xa8-0x18]; u8 flag; };
struct UnsignedCounts { u32 num,max; };
struct Actor137 {
    char pad0[0x40c]; StateMgrBlock state;
    char pad430[0x43c-0x430]; UnsignedCounts counts;
};
struct Actor143 {
    char pad0[0x411]; u8 flag;
    char pad412[0x46c-0x412]; void* model;
    char pad470[0x48c-0x470]; void* child;
};
struct DiagnosticRecord12 { u8 kind,active; u16 tag; u32 result,pc; };
struct IpcRequest { u32 header,result,descriptor; };
struct IpcQuadRequest { u32 header,result,reserved,value; };
struct BytePair { u8 first,second; };
struct Init105C { u32 a,b,c,d; u8 e,f,g; Init105C(); };
struct RecursiveLock12 { s32 word; u32 owner,count; };
struct WaitHandle { u32 handle; u8 done; };
struct FloatCallback12 { char pad0[0xc]; f32 value; };
struct GlobalFloatTarget { char pad0[0x14]; u8 dirty; char pad15[0xa4-0x15]; f32 value; };
struct GlobalFloatOwner { char pad0[0x18]; GlobalFloatTarget* target; };
struct ActorResource34C {
    char pad0[0x2d0]; void* child;
    char pad2d4[0x34c-0x2d4]; void* cached;
};
struct Event8 { s32 state,lock; };
struct Owner101F {
    char pad0[0x10]; u32 state;
    u8 byte14,flag15,byte16,enabled;
    char pad18[0x38-0x18]; Event8 event;
};
struct IpcByteRequest { u32 header; union { u32 result; u8 input; }; };
struct Primary17 {
    virtual ~Primary17();
    virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16();
};
struct Secondary2 { virtual ~Secondary2(); };

struct Base107C : Primary17,Secondary2 {
    u32 first,second;
    char pad10[0x24-0x10]; u8 enabled;
    char pad25[0x74-0x25];
    Base107C(); virtual ~Base107C();
    void setDimensions(u32,u32);
    void setEnabled(u8);
};
struct Derived107C : Base107C { Derived107C(); virtual ~Derived107C(); };
struct HeapAllocation {
    virtual ~HeapAllocation();
    virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void* allocate(u32,s32);
};
struct HeapContext;
struct NoThrowTag { u32 dummy; NoThrowTag() {} };
struct QueueBuffer { u32* data; char pad4[0x34-4]; };
struct QueueOwner { u32* allocation; QueueBuffer queue; };
struct IndexedRecord8 { u32 tag; s32 value; };
struct IndexedBlock {
    s32 count; IndexedRecord8 entries[1];
    IndexedRecord8* at(s32 i) {
        if(i<count) { u32 offset=4+i*8;return (IndexedRecord8*)((char*)this+offset); }
        return 0;
    }
};
struct IndexedSlot16 { IndexedBlock* block; u32 a,b,c; };
struct IndexedOwner11E6 {
    char pad0[0xc]; IndexedSlot16* slots;
    char pad10[0x1c-0x10]; s32 selected;
};
struct RelativeBlock {
    s32 count; u32 offsets[1];
    char* get(s32 i) {
        if(count<=i)return 0;
        u32 off=4+i*4;return (char*)this+*(u32*)((char*)this+off);
    }
};
struct RelativeSlot16 { RelativeBlock* block; u32 a,b,c; };
struct RelativeOwner11E8 {
    char pad0[0xc]; RelativeSlot16* slots;
    char pad10[0x3c-0x10]; s32 selected;
};
struct RelativeOwner11EB {
    char pad0[0xc]; RelativeSlot16* slots;
    char pad10[0x14-0x10]; s32 selected;
};
struct Actor12BC {
    struct Flags { u32 value; void set(u32 mask) { value|=mask; } };
    char pad0[0x59c]; Flags flags;
    char pad5a0[0x8bc-0x5a0]; s32 count;
};
struct FlagChild12E7 {
    char pad0[0xd]; u8 first,second;
    char padf[0x8e-0xf]; u8 option;
    void setSecond(u8 value) { second=value; }
};
struct Owner12E7 { char pad0[0x1434]; FlagChild12E7* children[1]; };
struct Timer12 {
    u32 current,max; f32 rate;
    void start(u32 n) { const u32& zero=0;max=n;rate=n?1.f/n:0.f;current=zero; }
};
struct ModeChildByte { char pad0[0x40]; u8 flag; };
struct ModeChildHalf { char pad0[0x18]; u16 flags; };
struct ModeOwner111 {
    u32 reserved; ModeChildByte* byteChild; ModeChildHalf* halfChild;
    u32 reservedC; u8 mode;
};
struct SinCosEntry { f32 sine,sineDelta,cosine,cosineDelta; };
struct Actor1373 { char pad0[0x4b8]; u8 flag; };
struct ActorD7 {
    char pad0[0x3dc]; Vec3 velocity;
    char pad3e8[0x4f4-0x3e8]; void* model;
    char pad4f8[0x51c-0x4f8]; Timer12 timer;
    char pad528[0x54c-0x528]; void* child;
};
struct Child61 { char pad0[0x61]; u8 enabled; void setEnabled(u8 value){enabled=value;} };
struct Actor13F {
    char pad0[0x410]; void* model; void* child; Child61* secondary;
    char pad41c[0x51d-0x41c]; u8 flag;
};
struct Child14D55 {char pad0[0xd];s8 first,second;};
struct Owner14D55 {char pad0[0x38];Child14D55* child;};
struct Global14D55 {char pad0[0x56c];u32 embedded;};
struct Context14FC {char pad0[0xf9c];void* target;};
struct Actor1243 {
    char pad0[0x3e8];s32 angle;
    char pad3ec[0x8bc-0x3ec];StateMgrBlock state;
    char pad8e0[0x8ec-0x8e0];s32 target;
    u32 unknown8f0;u32 mode;
};
struct OffsetListCursor {
    char* object;s32 offset;
    OffsetListCursor(ListNode* node,s32 off):object((char*)node-off),offset(off){}
    bool operator!=(const OffsetListCursor&)const;
    OffsetListCursor&operator++(){object=(char*)((ListNode*)(object+offset))->next-offset;return*this;}
};
struct OffsetListView {
    ListNode root;u32 count;s32 offset;
    OffsetListCursor begin();OffsetListCursor end();
};
struct Owner14DD {char pad0[0x3f8];OffsetListView list;};
extern "C" void func_0014EB3C(ActorVec124*);
extern "C" void func_00124694(ActorVec124* p) {
    func_0014EB3C(p);
    Vec3& velocity = p->velocity; __schedule_barrier();
    velocity = p->source;
    velocity.setMul(velocity,0.04f);
}
