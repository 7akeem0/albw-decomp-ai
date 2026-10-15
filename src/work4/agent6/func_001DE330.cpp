#include "a6_model.h"
struct Cls {
    void f(s32 a);
    char pad[0x600];
    Model600* m600;
    char pad604[0x630 - 0x604];
    SubModel* m630[25];
};
void Cls::f(s32 a) {
    m600->func_0028C8A0(a);
    for (int i = 0; i < 25; i++)
        m630[i]->vf1C(a);
}
