typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8; typedef float f32;
struct EventState { char pad[0x18]; s8 m18; };
extern EventState* data_00709DF8;
struct Actor;
struct Life { void add(s32 delta, bool b); u8 cur; u8 max; u8 tick; };   // 0x149BD4
void func_002914A0(Actor* a);
void func_00293388(Actor* a);
struct Mgr711010 { char pad[0x10]; void* m10; };
extern Mgr711010* data_00711010;
void emptyFn(void* p);   // EMPTY function (bx lr) -> armlink inlines the bl as mov r0,r0
struct Cls {
    virtual void vf0();
    void func_001DB544();
    char pad[0x598 - 4];
    Life m598;
    char pad59b[0x614 - 0x59b];
    Actor* m614;
};
void Cls::func_001DB544() {s8 k = data_00709DF8->m18; if (k == 7 || k == 0x25) m598.add(m598.max - m598.cur, false);
 func_002914A0(m614); emptyFn(data_00711010->m10); func_00293388(m614);}
