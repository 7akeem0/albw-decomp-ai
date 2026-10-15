typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
struct EventState { char pad[0x18]; s8 m18; };
extern EventState* data_00709DF8;
struct Actor;
struct ItemTable40C {};
struct Obj324 {};
void func_0028F7C8(Actor* a);
void func_002557A0(ItemTable40C* t, bool b);
void func_003619F4(void* p);
void func_003521A8(Obj324* o, s32 kind);
struct Cls {
    void func_001DBD7C();
    char pad[0x324];
    Obj324 m324;
    char pad325[0x40c - 0x325];
    ItemTable40C m40c;
    char pad40d[0x608 - 0x40d];
    void* m608;
    char pad60c[0x614 - 0x60c];
    Actor* m614;
};
void Cls::func_001DBD7C() {
    func_0028F7C8(m614);
    s8 k = data_00709DF8->m18;
    func_002557A0(&m40c, k == 7 || k == 0x25);
    func_003619F4(m608);
    func_003521A8(&m324, data_00709DF8->m18);
}
