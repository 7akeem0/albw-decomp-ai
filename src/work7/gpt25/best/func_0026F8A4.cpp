#include "../range_types.h"
struct Child26F8 {char pad[0x29];u8 flag;void set(u8 n){flag=n;}};
struct Obj26F8 {char pad[4];PtrArray25<Child26F8>*array;char gap[0x6b];u8 flag;};
extern "C" void f_0026F8A4(Obj26F8*p){p->flag=0;p->array->at(0)->set(1);}
