#include "range.h"
struct Slot2E36 {u32 value;u8 flag;u8 rest[3];};
struct Slots2E36 {Slot2E36 a[12];Slot2E36& at(u32 n){Slot2E36* p=a;if(n<12)p=&a[n];return *p;}};
struct O2E36 {u8 pad[0x34];Slots2E36 slots;};
void f_2E3608(O2E36* p,u8 v,u32 n){p->slots.at(n).flag=v;}
