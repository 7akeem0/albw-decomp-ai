typedef unsigned int u32;

extern void* data_00715210[];
void* func_0010DB90(void* g);

extern "C" void func_0058FAAC(void* a, void* b) {
    void* o = func_0010DB90(data_00715210[0]);
    if (o == 0) return;
    void** vt = *(void***)o;
    ((void (*)(void*, void*, void*))vt[0x18 / 4])(o, a, b);
}
