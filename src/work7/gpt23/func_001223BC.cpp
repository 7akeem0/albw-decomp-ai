#include "range.h"
struct Disposer122 { virtual ~Disposer122(); char pad4[0xc]; };
struct Member104 { char storage[0x104]; ~Member104(); };
struct Member4 { u32 value; ~Member4(); };
struct Object122 : Disposer122 {
    Member104 first;
    Member4 second;
    virtual ~Object122();
};
Object122::~Object122() {}
