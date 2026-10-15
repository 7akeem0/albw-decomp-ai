#include "ladder_types.h"
// Original vtable 006EE3BC, baseD1 002312F4, memberD1 0030E0F0.
struct Base_00503368{virtual ~Base_00503368();char pad4[0x180];};
struct Mem_0030E0F0{u32 data;~Mem_0030E0F0();};
struct Owner_00503368:Base_00503368{Mem_0030E0F0 member;virtual ~Owner_00503368();};
Owner_00503368::~Owner_00503368(){}
