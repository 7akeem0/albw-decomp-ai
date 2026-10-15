typedef unsigned int u32;

extern "C" int func_0051E300(void*);

extern "C" void func_0038A5C0(char* self) {
    if (func_0051E300(self) == 0) return;
    u32 n = *(u32*)(self + 0x1c);
    char** base = *(char***)(self + 0x24);
    char** end = base + n;
    for (char** p = base; p != end; p++) {
        void* o = *p;
        ((void (*)(void*))(*(void**)(*(char**)o + 8)))(o);
    }
    void* q = *(void**)(self + 0x74);
    ((void (*)(void*))(*(void**)(*(char**)q + 8)))(q);
}
