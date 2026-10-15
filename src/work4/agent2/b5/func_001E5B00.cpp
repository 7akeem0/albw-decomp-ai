// 0x1E5B00: handle-like {u32 m0; void* m4} destructor: release m4 via 0x58FA08 then clear
typedef unsigned int u32;
struct Res;
void func_0058FA08(Res* r);
struct ResHolder {
    ~ResHolder();
    u32 m0;
    Res* m4;
};
ResHolder::~ResHolder() {
    if (m4) {
        func_0058FA08(m4);
        m4 = 0;
        m0 = 0;
    }
}
