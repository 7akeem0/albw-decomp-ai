typedef unsigned int u32;
typedef int s32;
struct Handle { u32 v; Handle(u32 x) : v(x) {} };
struct Big {
    u32 pad[0x3BA4 / 4];
    Handle m3BA4;
    s32 m3BA8;
    void reset();
};
void Big::reset() {
    m3BA4 = Handle(0);
    m3BA8 = -1;
}
