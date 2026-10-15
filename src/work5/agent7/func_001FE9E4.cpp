typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
struct Req5C {
    Req5C(u16 id, u32 arg, bool flag);
    u32 m[0x5C / 4];
};
struct Target;
void func_0016898C(Target* t, const Req5C& r);
struct Obj9E4 {
    virtual void vf0();
    u32 m4, m8;
    Target* mC;
    u32 pad[(0x30 - 0x10) / 4];
    u8 m30;
    virtual void request(u32 id, u32 arg);
};
void Obj9E4::request(u32 id, u32 arg) {
    m30 = 1;
    func_0016898C(mC, Req5C(id, arg, false));
}
