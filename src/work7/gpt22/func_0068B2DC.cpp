#include "range.h"
struct Box{Vec3 minimum,maximum;};void target(Box*p,Vec3 a,Vec3 b){
if(a.x<b.x){p->minimum.x=a.x;p->maximum.x=b.x;}else{p->minimum.x=b.x;p->maximum.x=a.x;}
if(a.y<b.y){p->minimum.y=a.y;p->maximum.y=b.y;}else{p->minimum.y=b.y;p->maximum.y=a.y;}
if(a.z<b.z){p->minimum.z=a.z;p->maximum.z=b.z;}else{p->minimum.z=b.z;p->maximum.z=a.z;}}
