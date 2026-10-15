#include "../range_types.h"
struct Value31D4 {char pad[8];f32 value;char gap[0x1a];u8 dirty;};
struct Child31D4 {char pad[0x14];Value31D4*data;};
struct Obj31D4 {char pad[0x3c];Child31D4*child;};
extern "C" void f_0031D4D4(Obj31D4*p,f32 v){Value31D4*q=p->child->data;if(q->value!=v){q->value=v;q->dirty=1;}}
