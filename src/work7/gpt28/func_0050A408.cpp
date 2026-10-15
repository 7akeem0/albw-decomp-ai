#include "range.h"
struct Child50A4 { char pad0[0x61]; u8 active; };
struct Object50A4 { char pad0[0x40c]; void* model; char pad410[0x2c]; Child50A4* child; char pad440[0x27]; u8 active; void clear(); };
extern void func_004CF478(void*,bool,bool);
void Object50A4::clear() {
    child->active=0;
    func_004CF478(model,false,false);
    active=0;
}
