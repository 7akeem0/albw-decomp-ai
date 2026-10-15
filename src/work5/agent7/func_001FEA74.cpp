typedef unsigned int u32;
struct Obj4CF;
void func_004CF478(Obj4CF* o, bool v, int x);
struct Holder8 {
    u32 m0;
    u32 m4;
    Obj4CF* m8;
    void setFlag(bool v);
};
void Holder8::setFlag(bool v) { func_004CF478(m8, v, 0); }
