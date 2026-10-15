#include "../../range.h"
struct Info{u8 a,kind;};struct Request{u8 pad[0x2c];Info*info;};struct S{u8 pad[0x440];s16 countdown;};bool func_0013AA50(S*p,const Request*r){if(r->info&&p->countdown<=0&&r->info->kind==5){p->countdown=30;return true;}return false;}
