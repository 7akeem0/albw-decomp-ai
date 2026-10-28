// 0x48A0F4
extern char ro_006F5CE4;
extern void* data_007153D0;
extern "C" void func_0048B994(void*, void*);
extern "C" void* func_004A1520(void*);
extern "C" void func_0058FA5C(void*);
struct Cls {
    void* vt;
    void dtor();
};
void Cls::dtor() {
    *(void**)this = &ro_006F5CE4;
    void* g = data_007153D0;
    if (g) func_0048B994(g, this);
    func_0058FA5C(func_004A1520(this));
}
