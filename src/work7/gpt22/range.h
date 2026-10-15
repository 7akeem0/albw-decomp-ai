#ifndef GPT22_RANGE_H
#define GPT22_RANGE_H
typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef float f32;
struct Vec3 { f32 x,y,z; };
struct ActorView { u8 pad[0x3a4]; s32 animId; };
// Inferred views for the 0x676xxx tagged-value setters and intrusive-list accessors.
struct TaggedValue {u32 value;u8 kind;u8 pad5;union {u16 half;u8 byte;} small;u32 pad8,padC;u32 word;};
struct ListNode22 {ListNode22* prev;ListNode22* next;};
struct ListItem22 {u8 pad[0x5c];ListNode22 node;};
struct ListOwner22 {u8 pad[0x84];ListNode22 root;};
struct NpcActor22 {u8 pad0[0x361];u8 visible;u8 pad362[0x85e-0x362];u8 status;};
extern "C" void func_004BCAE0(NpcActor22*,bool);
struct NpcVirtual22 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
 virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
 virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
 virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
 virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
 virtual void v28(); virtual void onReady();
 u32 sub;
};
extern "C" bool func_00547B20(u32*);
struct EnemyTail22 {
 u8 pad0[0x3d0];Vec3 pos3d0;f32 vx,vy,vz;
 u8 pad3e8[0x8bc-0x3e8];Vec3 pos8bc;u8 pad8c8[4];f32 value8cc;u8 pad8d0[8];s32 angle8d8;u32 angle8dc;union{u8 flag8e0;u16 half8e0;};
 u16 max8e2,pad8e4,cur8e6;
 u8 pad8e8[4];u8 flag8ec;u8 pad8ed[0x90a-0x8ed];u8 flag90a;
 u8 pad90b[0x916-0x90b];u8 flag916;
 u8 pad917[0x98d-0x917];u8 flag98d;
};
struct NpcControlVirtual22 : NpcVirtual22 {
 virtual void v30();virtual void v31();virtual void v32();virtual void v33();
 virtual void v34();virtual void v35();virtual void v36();virtual void v37();
 virtual void v38();virtual void v39();virtual void v40();virtual void v41();
 virtual s32 v42();virtual void request(s32,s32);
};
struct NpcControl22 : NpcControlVirtual22 {
 u8 pad8[0x361-8];u8 visible361;u8 pad362[0x3ac-0x362];f32 value3ac;u8 pad3b0[0x3e8-0x3b0];s32 angle3e8;u8 pad3ec[0x478-0x3ec];u32 ctl478;
 u8 pad47c[0x818-0x47c];s32 target818;u8 pad81c[0x852-0x81c];u8 flag852,id853,request854;u8 id855,pad856[2];u8 state858;
 u8 pad859[4];u8 flag85d;u8 state85e;u8 gate85f,flag860,flag861;u8 pad862[0x904-0x862];s16 reset904[6];u8 pad910[0x964-0x910];s8 state964;u8 pad965[0x984-0x965];s32 id984;u8 state988;
 u8 end989[3];
};
struct NpcState22 : NpcControl22 {
 u8 pad98c[0x9bc-0x98c];u32 id9bc;u8 pad9c0[0x9d1-0x9c0];
 u8 flag9d1,pad9d2,state9d3,flag9d4;
};
struct HeapList22 {void* heaps[5];u32 index;};
struct FactoryArg22 {HeapList22* list;};

struct Heap22;struct HeapContext22;
extern "C" HeapContext22* data_00715210;
extern "C" Heap22* func_0010983C(HeapContext22*,Heap22*);
void*operator new(u32,Heap22*,s32)throw();
inline void restoreHeap22(Heap22*p){if(p!=(Heap22*)1)func_0010983C(data_00715210,p);}
struct ScopedHeap22{Heap22*previous;ScopedHeap22(Heap22*h){if(h)previous=func_0010983C(data_00715210,h);else previous=(Heap22*)1;}~ScopedHeap22(){restoreHeap22(previous);}};

// SafeString shape follows work5/agent1/a1_1d0.h.
struct SafeString22{char*text;SafeString22(const char*s):text(const_cast<char*>(s)){}virtual~SafeString22(){}virtual void assureTerminationImpl_()const{}};
struct Soldier22{u8 pad0[0x3dc];f32 vx,vy,vz;u8 pad3e8[0x8f4-0x3e8];u32 count8f4;u8 pad8f8[0x908-0x8f8];u8 flag908;u8 pad909[0x98f-0x909];u8 flag98f;};
struct Counter22{s32 value;Counter22(s32 n):value(n){}operator s32()const{return value;}Counter22&operator++(){++value;return*this;}};
struct CurveResource22;
union CurveValue22{f32 constant;CurveResource22*curve;};
struct CurveParams22{u32 prefix[2],flags;CurveValue22 values[3];};
struct StateControl22{u32 count;};
struct EnemyGate22{u32 unknown;u8 busy;};
struct EnemyDecision22{u8 pad0[0x508];s16 health;u16 pad50a;u32 pad50c;EnemyGate22*gate;u8 pad514[0x8f0-0x514];StateControl22 state;};
struct PmfOwner22{};typedef void(PmfOwner22::*StateFn22)();
struct Timeline22;
struct StateCallbacks22{u32 count;s8 current,next;u8 stateCount,pad7;u32 reserved8,reservedc;Timeline22*timeline;PmfOwner22*owner;StateFn22*enter,*execute,*exit;};
struct WorldManager22;
struct FoundActor22{u8 pad0[0x4c8];u16 cooldown;};
struct ActorLookup22{u32 first;};
struct Game22{u8 pad0[0x3dbbc];ActorLookup22 actors;};
extern "C" WorldManager22*data_007142C8;
extern "C" Game22*data_00706E20;
extern "C" FoundActor22*func_0052FBA0(ActorLookup22*,u32);
// Inherited factory vtable layout:41 primary slots, secondary at38.
struct Primary38_22{virtual~Primary38_22(){}virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();u8 pad[0x34];};
struct Secondary4_22{virtual~Secondary4_22(){}};
struct TreeNode22{u32 value;TreeNode22*left,*right;};
struct TreeCallbackOwner22{};
struct TreeCallback22{virtual void v();void invoke(TreeNode22*p){if(owner&&method)(owner->*method)(p);}TreeCallbackOwner22*owner;void(TreeCallbackOwner22::*method)(TreeNode22*);};
struct Mutex22{u32 state,owner,depth;};
struct Semaphore22{volatile s32 count;s16 minimum,maximum;};
extern "C" void func_0010C0C0(Mutex22*);
extern "C" void func_0010C160(Mutex22*);
struct ScopedLock22{Mutex22*mutex;ScopedLock22(Mutex22*p):mutex(p){func_0010C0C0(mutex);}~ScopedLock22(){func_0010C160(mutex);}};
struct RingQueue22{u32*buffer;Semaphore22 readable,writable;Mutex22 mutex;u32 capacity,head,count;s32 waiters,writers;};
struct NpcMove22{u8 pad0[0x5e];s16 actorId;u8 pad60[0x476-0x60];u8 ready;u8 pad477[0x9c0-0x477];Vec3 position;u8 pad9cc[7];u8 state;};
struct MovedActor22{u8 pad0[0x368];Vec3 position368;u8 pad374[0x3d0-0x374];Vec3 position3d0;s32 func_00588BE4();};
extern "C" MovedActor22*func_0052FBDC(ActorLookup22*,s32,s32);
extern "C" s32 ro_00693800;
struct TimerData22{u8 pad[0x28];u16 time,duration;};
struct NpcAssign22{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();virtual void v40();virtual void v41();virtual void v42();virtual void v43();virtual bool reduceTime();u8 pad4[0x98c-4];TimerData22 timer;u8 kind,parameter,unused,clear;u32 actorId;Vec3 position;u16 time,duration;u8 storedKind,flag,storedParameter,state;};

struct EnemyAim22{u8 pad0[0x3d0];Vec3 position;f32 vx,vy,vz;s32 angle;u8 pad3ec[0x8bc-0x3ec];Vec3 targetPosition;u8 pad8c8[0x10];s32 targetAngle;u8 pad8dc[0x8f0-0x8dc];StateControl22 state;};
struct NoThrow22{};void*operator new(u32,NoThrow22)throw();
struct ActorCreate22{u32 unknown[2];u32 initialWord;};
struct Primary320_22{virtual~Primary320_22();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16(); u8 pad4[0x31c];};
struct SecondaryActor22{virtual void run();};
struct ActorBase150E40_22:Primary320_22,SecondaryActor22{u8 pad324[0x40c-0x324];ActorBase150E40_22(ActorCreate22*);};
struct Manager14A998_22;
extern "C" Manager14A998_22*data_00712468;
extern "C" void func_0014A998(Manager14A998_22*,bool);
struct IntermediateActor22:ActorBase150E40_22{u32 initialWord;IntermediateActor22(ActorCreate22*a):ActorBase150E40_22(a){init(a);}void init(ActorCreate22*);};
struct CreatedActor22;
extern "C" void*func_0050574C(CreatedActor22*,ActorCreate22*,u32,u32);
struct CreatedActor22:IntermediateActor22{void*created;Counter22 value;CreatedActor22(ActorCreate22*a):IntermediateActor22(a),created(func_0050574C(this,a,0,0)),value(0){}};

#endif
