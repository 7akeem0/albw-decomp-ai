#include "../../range.h"
struct Random{u32 x,y,z,w;};u32 func_00111A64(Random*p){u32 t=p->x^(p->x<<11);p->x=p->y;p->y=p->z;p->z=p->w;return p->w=(p->w^(p->w>>19))^(t^(t>>8));}
