#include "range.h"
struct Model52F2 { char pad[0xac]; u32 value; };
struct Holder52F2 { Model52F2* model; };
struct Object52F2 { char pad[0x24]; Holder52F2* holder; char gap[0xb8]; u32 fallback; u32 get(); };
extern bool func_0057D86C(const Holder52F2*);
u32 Object52F2::get() {
    if(func_0057D86C(holder)) return holder->model ? holder->model->value : u32(-1);
    return fallback;
}
