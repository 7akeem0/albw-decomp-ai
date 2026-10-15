#include "range.h"
struct Child34AF {char pad[0x52b];u8 flag;void clear(u8 n){flag=n;}};
struct Base34AF {virtual ~Base34AF();char pad[0x4c];Child34AF* child;};
struct Obj34AF:Base34AF {virtual ~Obj34AF();};
Obj34AF::~Obj34AF(){child->clear(0);}
