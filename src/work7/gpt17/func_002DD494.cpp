#include "range.h"
struct Child {u8 pad[0x166];u8 flag;void set(u8 n){flag=n;}};
struct Base_002D5D3C {virtual ~Base_002D5D3C();};
struct D:Base_002D5D3C {u8 pad[0x50-4];Child* child;virtual ~D();};
D::~D(){child->set(1);}
