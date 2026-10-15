typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3{ f32 x,y,z; };

struct P { char pad[0x68]; Vec3 cur; Vec3 delta; u8 flag; };
void f(P* p, const Vec3* v){ if(p->flag==0){ p->delta.x=v->x-p->cur.x; p->delta.y=v->y-p->cur.y; p->delta.z=v->z-p->cur.z; } p->cur=*v; p->flag=0; }
