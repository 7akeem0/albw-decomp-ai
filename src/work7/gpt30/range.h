#ifndef GPT30_RANGE_H
#define GPT30_RANGE_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;
struct Vec3 {
    f32 x,y,z;
    void setZero(){for(s32 i=0;i<3;++i)(&x)[i]=0.0f;}
};
struct NpcControl30 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual s32 v42();
    virtual void request(s32,s32);
    char pad4[0x361-4]; u8 visible361;
    char pad362[0x818-0x362]; s32 target818;
    char pad81c[0x853-0x81c]; u8 id853,id854;
    char pad855[0x85e-0x855]; u8 state85e;
    char pad85f[0x861-0x85f]; u8 gate861;
    void setTarget(s32 n){target818=n;}
    void updateTarget(s32 n);
};
struct ActorPrimary30 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    char pad4[0x320-4];
};
struct ActorSecondary30 { virtual void secondary(); char pad4[0x640-4]; };
struct ActorParam30;
struct NpcInitParam30;
struct ActorBase30:ActorPrimary30,ActorSecondary30 {
    ActorBase30(ActorParam30*,s32,const NpcInitParam30&);
};
struct StateMgrBase30 { char data[0x14]; StateMgrBase30(); };
struct StateMgr30:StateMgrBase30 {
    void* owner; void* enter; void* execute; void* exit;
    StateMgr30():StateMgrBase30(),owner(0),enter(0),execute(0),exit(0){}
};
struct CostPair30 { char pad0[0x9cc]; u16 costA,costB; };
struct ActorVelocity30 {char pad0[0x3dc];Vec3 velocity;};
struct Player30;
extern Player30* data_0070FB60;
extern "C" s32 func_005568D4(Player30*);
extern "C" void func_00255AB4(Player30*,s32);
struct IDisposer30 {virtual ~IDisposer30();char pad4[0xc];};
struct ListOwner30 {u32 first,last;s32 count;};
struct ListNode30;
extern "C" void func_0010F1F8(ListNode30*);
struct ListNode30 {
    ListNode30* previous;ListNode30* next;u32 extra;
    ListOwner30* owner;
    void unlink(){
        ListOwner30* p=owner;
        if(p){owner=0;func_0010F1F8(this);--p->count;}
    }
    void unlink(ListOwner30* zero){
        ListOwner30* p=owner;
        if(p){owner=zero;func_0010F1F8(this);--p->count;}
    }
};
struct Focus30 {char pad0[0x10];u32 selected;};
struct Game30 {char pad0[0x3dbe8];Focus30* focus;};
extern Game30* data_00706E20;
struct ActorFocus30 {
    char pad0[0x2cc];u32 id;
    char pad2d0[0x8e4-0x2d0];u16 timer;
};
struct Heap30;
struct HeapContext30;
extern HeapContext30* data_00715210;
extern "C" Heap30* func_0010983C(HeapContext30*,Heap30*);
void* operator new(u32,Heap30*,s32) throw();
inline void restoreHeap30(Heap30* heap){
    if(heap!=reinterpret_cast<Heap30*>(1))func_0010983C(data_00715210,heap);
}
struct ScopedHeapSwitch30 {
    Heap30* previous;
    ScopedHeapSwitch30(Heap30* heap){
        if(heap)previous=func_0010983C(data_00715210,heap);
        else previous=reinterpret_cast<Heap30*>(1);
    }
    ~ScopedHeapSwitch30(){restoreHeap30(previous);}
};
typedef unsigned long long u64;
struct Random30 {
    u32 state[4];
    u32 func_00111A64();
    u32 below(u32 bound){return static_cast<u32>((static_cast<u64>(func_00111A64())*bound)>>32);}
};
extern "C" Random30* func_0058A7D4(void*);
struct RandomManager30 {u8 pad0[0x660];Random30 random;};
extern RandomManager30* data_007124F0;
struct StateSoldier30 {
    u32 frame;s8 current,previous;u8 pad6[0x24-6];
    void func_0065AE94(s32);
    void func_003931EC(s32);
    __attribute__((weak)) void func_0065AF00();
    void change(s32 n){func_0065AE94(n);func_003931EC(n);func_0065AF00();}
};
struct Soldier30 {u8 pad0[0x90c];StateSoldier30 state;u8 pad930[0x97c-0x930];u32 counter;};
#endif
