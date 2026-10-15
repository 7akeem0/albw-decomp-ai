#include "range.h"
struct String1349 {virtual ~String1349(){};virtual void assureTermination()const;const char* text;String1349(const char* value):text(value){}};
struct Resource1349 {char pad0[0x84];const char* name;};
struct Inner1349 {char pad0[8];Resource1349* resource;};
struct Holder1349 {char pad0[0x50];Inner1349* inner;};
struct Actor1349 {char pad0[0x40c];StateMgrBlock state;char pad430[0x530-0x430];Holder1349* holder;};
extern "C" void func_002C40D8(Actor1349*);
extern "C" void func_001344C0(StateMgrBlock*,Actor1349*,const String1349&);
extern "C" void func_00134988(Actor1349* p){
    func_002C40D8(p);
    String1349 name(p->holder->inner->resource->name);
    func_001344C0(&p->state,p,name);
}
