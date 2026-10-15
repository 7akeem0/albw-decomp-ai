#include "range.h"
struct Entry {char pad[0x18];Vec3 pos;char pad24[0x34-0x24];};
struct Entries {Entry data[20];Entry& at(u32 i){if(i<20)return data[i];return data[0];}};
struct S {Vec3 defaultPos;u32 count;Entries entries;};
const Vec3& f_54F9E4(S*p,u32 i){if(i<p->count)return p->entries.at(i).pos;return p->defaultPos;}
