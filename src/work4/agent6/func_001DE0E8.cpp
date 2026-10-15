#include "a6_model.h"
struct Cls {
    void f(s32 a, s32 b);
    char pad[0x600];
    Model600* m600;
    char pad604[0x630 - 0x604];
    SubModel* m630[25];
};
void Cls::f(s32 a, s32 b) {
    m600->func_0028C3E8(a, b);
    for (int i = 0; i < 25; i++)
        m630[i]->func_002D41B0(a, b);
}
