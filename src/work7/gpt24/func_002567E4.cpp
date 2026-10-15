#include "range.h"
extern void func_0028C740(void*,u32);
struct Base2D5D {virtual ~Base2D5D();char pad[0x4c-4];void* child;}; // original D1: 002D5D3C
struct Object2567:Base2D5D {virtual ~Object2567();};
Object2567::~Object2567(){func_0028C740(child,0);}
