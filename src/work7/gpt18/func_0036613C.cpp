#include "range.h"
struct Child3661 {char pad[0xc7];u8 flag;void clear(u8 n){flag=n;}};
struct Base3661 {virtual ~Base3661();char pad[0x28];Child3661* child;};
struct Obj3661:Base3661 {virtual ~Obj3661();};
Obj3661::~Obj3661(){child->clear(1);}
