#include "range.h"
struct Matrix{float m[3][4];};struct Buffer{u8 pad[0x14];Matrix*data;};struct Model{u8 pad[0x24];Buffer*buffer;};
struct S{u8 pad[0x40c];Model*model;u8 gap[0x41c-0x410];void*child;u8 tail[0x8fc-0x420];s32 joint;};
extern "C" void func_004F5BD8(S*,s32,s32);extern "C" void func_001512B4(void*,const Vec3&);
void target(S*p){func_004F5BD8(p,0,0);const Matrix&m=p->model->buffer->data[p->joint];Vec3 v={m.m[0][3],m.m[1][3],m.m[2][3]};func_001512B4(p->child,v);}
