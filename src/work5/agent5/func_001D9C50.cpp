typedef unsigned int u32;
typedef signed int s32;
typedef unsigned short u16;
struct Mgr709;
extern Mgr709* data_00709D28;
struct Item448 { char pad[0x10]; };
void func_004A9120(Mgr709* m, Item448* it);
void func_004A8BFC(Mgr709* m, Item448* it, s32 n);
struct Sub444 { char pad[0x2c]; u32 m2c; };
struct Obj39 {
    char pad0[0x444];
    Sub444* m444;
    Item448 m448;
    char pad458[0x47a - 0x458];
    u16 m47a;
    void f();
};
void Obj39::f() {
    func_004A9120(data_00709D28, &m448);
    func_004A8BFC(data_00709D28, &m448, 3);
    m47a = 0x900;
    m444->m2c |= 0x8000;
}
