#include "range.h"
struct C7D0 {u8 kind;};struct O7D0 {u8 pad[0x2c];C7D0*child;};
extern "C" bool func_004F7E8C(void*,O7D0*);
extern "C" bool func_00357D0C(void*p,O7D0*q){if(q->child&&q->child->kind==3)return false;return func_004F7E8C(p,q);}
