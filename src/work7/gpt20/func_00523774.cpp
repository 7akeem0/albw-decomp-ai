#include "ladder_types.h"
struct O5237Flags {char pad0[0x34];u8 first;u8 pad35;u8 second;};
extern "C" bool func_00523774(O5237Flags* p,u32 n){
    if(n>7) return (p->second & (1u<<(n-8)))!=0;
    return (p->first & (1u<<n))!=0;
}
