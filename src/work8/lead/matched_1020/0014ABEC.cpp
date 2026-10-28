extern void func_00688340(void);
struct Callback {
    unsigned char type;
    void (*fn)(void);
    Callback(void (*f)(void), int t) { fn = f; type = t; }
};
extern unsigned func_0014AA1C(unsigned, const Callback&, int, int);
unsigned func_0014ABEC(unsigned a0)
{
    return func_0014AA1C(a0, Callback(func_00688340, 2), 0, 2);
}
