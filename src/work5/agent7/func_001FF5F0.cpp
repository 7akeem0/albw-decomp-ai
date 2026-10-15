typedef unsigned int u32;
struct Obj4CF;
void func_004CF478(Obj4CF* o, bool v, int x);
struct Holder80 {
    u32 pad[0x80 / 4];
    Obj4CF* m80;
    void setFlag(bool v);
};
void Holder80::setFlag(bool v) { func_004CF478(m80, v, 0); }
