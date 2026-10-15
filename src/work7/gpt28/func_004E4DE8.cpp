#include "range.h"
struct Timer4E4D { char bytes[4]; };
struct Object4E4D { char pad[0x2d7]; u8 active; char gap[0xf8]; Vec3 position,velocity; char gap3e8[0x144]; Timer4E4D timer; void update(); };
extern void func_00115C54(Vec3*,const Vec3*,const Vec3*);
extern bool func_00392C20(Timer4E4D*);
void Object4E4D::update() {
    Vec3* p=&position;
    func_00115C54(p,p,&velocity);
    if(func_00392C20(&timer)) active=1;
}
