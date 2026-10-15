#include "range.h"
#include "actor19.h"
struct Member_004EE540 {u8 opaque[0x78];~Member_004EE540();};
struct Member_004EDD04 {u32 opaque;~Member_004EDD04();};
struct D:ActorBase19 {u8 pad[0x450-0x324];Member_004EE540 first;Member_004EDD04 second;virtual ~D();};
D::~D(){}
