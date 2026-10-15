#include "range.h"
struct Object4956 { char pad[0xd4]; u32 first; char gapD8[0xd0]; u32 second; char gap1AC[0x60]; u32 third; char gap210[0x60]; u32 fourth; void update(u32,u32); };
extern void func_0048E924(u32*,Object4956*,u32*,u32*,u32*,u32,u32,u32);
void Object4956::update(u32 a,u32 b) { func_0048E924(&fourth,this,&second,&first,&third,a,b,1); }
