// 0x48A0F4
extern char ro_006F4E30;
extern void* data_00714F90;
extern "C" void func_0048E620(void*, void*);
extern "C" void* func_004A1520(void*);
extern "C" void func_0058FA5C(void*);
struct Cls {
    void* vt;
    void dtor();
};
void Cls::dtor() {
    *(void**)this = &ro_006F4E30;
    void* g = data_00714F90;
    if (g) func_0048E620(g, this);
    func_0058FA5C(func_004A1520(this));
}
