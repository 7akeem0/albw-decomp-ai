typedef unsigned int u32;

extern "C" void func_0066697C(void*, u32);

extern "C" void func_0035C758(char* self) {
    char* dst = self + 0x4f8;
    float zero = 0.0f;
    if (*(float*)(self + 0x520) == zero) {
        if (*(float*)(self + 0x528) == zero) {
            int r = ((int (*)(void*))(*(void**)(*(char**)self + 0x68)))(self);
            if (r == 0) return;
        }
    }
    func_0066697C(dst, 0);
}
