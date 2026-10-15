#include "range.h"
struct Base410 {virtual ~Base410(){mode=3;}u8 pad4[0x9b-4];u8 mode;u8 pad9c[0x124-0x9c];};
struct Member410 {virtual ~Member410();u8 pad4[0x60-4];};
struct Obj410:Base410 {Member410 member;virtual ~Obj410();};
Obj410::~Obj410(){}
