typedef unsigned char u8;
extern "C" void* data_0070D858;
extern "C" void func_001720C8(void*);
extern "C" void func_00688340(void);
struct Callback {
    u8 type;
    void (*fn)(void);
    Callback(void (*f)(void), int t) { fn = f; type = t; }
};
extern "C" void func_0014AA1C(void*, const Callback&, int);
struct T { u8 pad[0x70]; u8 m70; };
extern "C" void func_0014A9C8(void* self)
{
    T* g = (T*)data_0070D858;
    if (g != 0 && g->m70 != 9) func_001720C8(g);
    func_0014AA1C(self, Callback(func_00688340, 2), 0);
}
