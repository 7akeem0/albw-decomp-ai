#include "range.h"
struct Owner582D { char pad[0x1418]; SafeSlots<void*,16> slots; };
extern char bss_007A96F0[];
extern void* func_0053085C(void*,u32);
void* f_00582DA4(Owner582D* p,u32 index,u32 kind) {
    void* value=p->slots[index];
    if(value)return func_0053085C(value,kind);
    return bss_007A96F0;
}
