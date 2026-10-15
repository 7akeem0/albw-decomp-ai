#include "range.h"
struct Object48FBC;
struct SelfPair48FB { Object48FBC* owner; u32 count; SelfPair48FB(Object48FBC*,u32); };
SelfPair48FB::SelfPair48FB(Object48FBC* p,u32 zero) : owner(p),count(zero) {}
struct Base48FBC { u32 first, second; SelfPair48FB pair; Base48FBC(Object48FBC*,u32); };
Base48FBC::Base48FBC(Object48FBC* p,u32 zero):first(zero),second(zero),pair(p,zero){}
struct BufferState48FB { void* buffer; u32 size,capacity,flags; BufferState48FB():buffer(0),size(0),capacity(0),flags(0){} };
struct Object48FBC : Base48FBC {
    virtual ~Object48FBC();
    BufferState48FB state;
    Object48FBC();
};
Object48FBC::Object48FBC() : Base48FBC(this,0),state() {}
