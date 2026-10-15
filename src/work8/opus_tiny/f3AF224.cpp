// 0x3AF224: single-slot virtual predicate (vtable 0x6E912C): does the object's 22-bit id equal our key?
// Key and id are an Id class (ctor from u32, member operator==); copying the key to a local FIRST makes ARMCC
// load m4 into r2 before the field (orig order), the id wrapped via the converting ctor ends in r0.
typedef unsigned int u32;
struct Id { u32 v; Id(u32 x) : v(x) {} Id() {} bool operator==(const Id& o) const { return v == o.v; } };
struct Obj3AF { char pad[0x2cc]; u32 id : 22; u32 hi : 10; };
struct IdMatcher { virtual bool match(const Obj3AF* b) const; Id mKey; };
bool IdMatcher::match(const Obj3AF* b) const { Id k = mKey; Id x = Id(b->id); return x == k; }
