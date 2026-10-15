#include "../range_types.h"
struct Data2933 { char pad[0x18]; Vec3 value; };
struct Obj2933 { char pad[0x164]; Vec3 value; };
extern Data2933* data_00709DF8;
extern "C" void f_00293388(Obj2933* p) {
    p->value=data_00709DF8->value;
}
