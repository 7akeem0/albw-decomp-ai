#ifndef GPT25_RANGE_TYPES_H
#define GPT25_RANGE_TYPES_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
struct Flag32 {
    u32 v;
    void change(u32 mask, bool on) { if (on) v |= mask; else v &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void reset(u32 mask) { change(mask, false); }
};
struct Vec3 { f32 x,y,z;void setZero(){for(s32 i=0;i<3;++i)(&x)[i]=0.f;} void setXYZ(const Vec3&o){x=o.x;y=o.y;z=o.z;} void setAll(f32 v){for(s32 i=0;i<3;++i)(&x)[i]=v;} };
struct CounterPair25 {u32 cur,max;bool isEnd()const{CounterPair25 t=*this;return t.cur>=t.max;}};
struct Timer25 {u32 cur,max;f32 rate;void start(u32 n,u32 c=0){max=n;if(n)rate=1.f/n;else rate=0.f;cur=c;}};
struct Dispatch3217 {
    virtual void dispatch(s32);
    u32 arg0,arg1,arg2;
};
struct Table3217 { Dispatch3217 entries[17]; };
template<class T> struct PtrArray25 {
    s32 count,capacity;
    T** items;
    T* at(u32 index) const {
        if (index < (u32)count) return items[index];
        return 0;
    }
};
struct Interp293C;
struct Obj293C { char pad[0x164]; PtrArray25<Interp293C> interps; };
extern "C" void func_0010C7F8(Interp293C*,s32,f32);
struct Obj2CF0 { char pad0[0x40c]; u32 state; char pad1[0x478-0x410]; u32 value; };
extern "C" __attribute__((weak)) void func_00663954(u32*,s32);
struct Obj2D3B { char pad0[0x10]; f32 value; char pad1[8]; s32 count; };
struct InterpStorage25 { char bytes[0x18]; };
struct Obj2974 { char pad[0x5c]; InterpStorage25 interps[2]; f32 value0,value1; };
struct Flag16 {
    u16 v;
    Flag16(){}
    Flag16(u16 n):v(n){}
    void reset(u16 mask){*this=Flag16(v&~mask);}
    void set(u16 mask){*this=Flag16(v|mask);}
};
struct Child2BFControl { char pad[0x16]; Flag16 flags; };
struct Obj2BFControl {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    char pad0[0x10];Child2BFControl*child;char pad1[0x5d-0x18];u8 flag5d,flag5e;
};
struct AnimRequest25 {char storage[0x5c];AnimRequest25(u16,u32,bool);};
#endif
