#include "ladder_types.h"
struct Child5210 {char pad0[12];Vec3 pos;};
struct O5210 {char pad0[0x2d0];Child5210* child;};
extern const Vec3 data_00725974;
const Vec3* f_00521028(O5210* p){return p->child?&p->child->pos:&data_00725974;}
