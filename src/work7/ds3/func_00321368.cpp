#include "ds3.h"
extern "C" void func_0048EF78();
extern "C" void func_003DDB5C(f32);
extern "C" void func_003DE2D0(int);
extern "C" int func_003DE120();
extern "C" void func_004102BC(int, int);
void func_00321368() {
    func_0048EF78();
    func_003DDB5C(1.0f);
    func_003DE2D0(0);
    switch (func_003DE120()) {
    case 0: func_004102BC(0, 0); return;
    case 1: func_004102BC(0, 1); return;
    case 2: func_004102BC(0, 2); return;
    }
}
