typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8; typedef float f32;
struct Actor;
u8 func_0053F5E0(Actor* a);    // ldrsh m42 -> table data_7111A8[m42*16] (kind)
struct Sub3C {};
void func_0028D7A4(Sub3C* s, f32 v);
struct Model600 {
    char pad[0x3c];
    Sub3C m3c;
    char pad3d[0x5c - 0x3d];
    Sub3C m5c;
};
struct Cls {
    void func_001DBDDC();
    char pad[0x600];
    Model600* m600;
    char pad604[0x614 - 0x604];
    Actor* m614;
};
void Cls::func_001DBDDC() {
    if (func_0053F5E0(m614) == 0xb || func_0053F5E0(m614) == 0x11) {
        func_0028D7A4(&m600->m3c, 0.0f);
        func_0028D7A4(&m600->m5c, 0.0f);
    }
}
