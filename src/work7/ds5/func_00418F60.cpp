// 0x418F60
extern "C" void func_0041CA0C(void*);

static inline void maybe(void* p, int a) { if (a == 2) func_0041CA0C(p); }

struct Cls {
    void f(int a, char* b);
};
void Cls::f(int a, char* b) {
    maybe(this, a);
    *(int*)(b + 0x9c) = 0;
}
