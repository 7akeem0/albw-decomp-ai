#include "range.h"
struct MemberD4 { ~MemberD4(); char bytes[0xd4]; };
struct Member64 { ~Member64(); char bytes[0x64]; };
struct Object4940 { MemberD4 first, second; Member64 third, fourth, fifth; ~Object4940(); };
Object4940::~Object4940() {}
