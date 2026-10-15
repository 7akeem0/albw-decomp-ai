

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
struct Triple3C2 {u32 a,b,c;};
struct Obj3C2 {char pad[0x1fc]; Triple3C2 value;};
struct Flag32 {u32 v; void change(u32 m,bool on){if(on)v|=m;else v&=~m;} void set(u32 m){change(m,true);} void reset(u32 m){change(m,false);}};
struct Vec3 {f32 x,y,z;};
struct ActorPrimary19 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual ~ActorPrimary19();
 virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
 virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
 virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
 virtual void v17(); virtual void v18(); char pad[0x320-4];
};
struct ActorSecondary {virtual void b0(); char pad[0x410-0x324];};
struct ActorBase19:ActorPrimary19,ActorSecondary {virtual ~ActorBase19();};
struct Obj3C26;
typedef void (Obj3C26::*Method3C26)();
struct Delegate3C26 {Obj3C26* owner;Method3C26 cb;void bind(Obj3C26* p,Method3C26 f){owner=p;cb=f;}};
struct Obj3C26 {char pad[0x1c];Delegate3C26 delegate;};
extern const Method3C26 ro_006A6C98[];

template<class Kind> struct MessageHeader18 {u32 prefix[2];u8 code;u8 reserved9;Kind kind;};
template<class Kind> struct MessageRequest18 {MessageHeader18<Kind>* p;};
struct MessageCounter18 {char pad[0x10];u32 count;u32 reserved14;u32 remaining;};
struct IpcCommand18 {u32 header,result;};



struct StateVirtual18 {
 virtual void v0();virtual void v1();virtual void v2();virtual ~StateVirtual18();
 virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();
 virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();
 virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();
 virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();
 virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();
 virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();
 virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();
 virtual void v40();virtual void v41();virtual void v42();virtual void v43();virtual void v44();
 virtual void v45();virtual void v46();virtual void v47();virtual void v48();virtual void v49();
 virtual void v50();virtual void v51();virtual void v52();virtual void v53();virtual void v54();
 virtual void v55();virtual void v56();virtual void v57();virtual void v58();virtual void v59();
 virtual void v60();virtual void v61();virtual void v62();virtual void v63();virtual void v64();
 virtual void v65();virtual void v66();virtual void v67();virtual void v68();virtual void v69();
 virtual void v70();virtual void v71();virtual void v72();virtual void v73();virtual void v74();
 virtual void v75();virtual void finish76();virtual void v77();virtual void v78();
 virtual bool query79(s32,bool);
};
struct StateObject18:StateVirtual18 {char pad4[0x48-4];void*actor;u32 timer;char pad50[0x6c-0x50];u32 state;};
struct Random18 {u32 func_00111A64();u32 below(u32 n){return ((unsigned long long)func_00111A64()*n)>>32;}};
struct Mtx34_18 {f32 data[12];};
struct MatrixChild18 {char pad[0x80];Mtx34_18 matrix;char gap[0x164-0xb0];u32 flags;};
struct MatrixOwner18 {u32 word;MatrixChild18*child;};
struct ModelRequest18 {char pad[0x600];void*model;};
struct O{char pad[0x48];void*child;};extern void func_003A3568(void*,u32);extern void func_003842C0(void*,u16,u32,bool);
static void ctx(void* a0,u16 const& a1,u32 const& a2,bool const& a3){func_003842C0(a0,a1,a2,a3);}
void func_003BDFBC(O*p){func_003A3568((char*)p->child+0xbc8,0);ctx((char*)p->child+0x8c0,57,10,true);}
