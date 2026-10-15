#include "../../../work7/ds3/ds3.h"
struct Node2C32 { char pad[0xc]; u32 fieldC; };
struct S2C32 { char pad[0x30]; u32 count; };
extern "C" void func_0010F1F8(void*);
void func_002C32C8(S2C32* p, char* n) {
    Node2C32* node = n ? (Node2C32*)(n + 0x10) : 0;
    if (node->fieldC) { node->fieldC = 0; func_0010F1F8(node); --p->count; }
}
