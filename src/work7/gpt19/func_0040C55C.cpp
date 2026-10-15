#include "range.h"
struct Primary {virtual ~Primary(){} char pad[0x3c];};
struct Secondary {void finalize(){} virtual ~Secondary(){finalize();}char pad[0x48];};
struct Member {void finalize(){} virtual ~Member(){finalize();}};
struct S:Primary {Secondary secondary;Member member;void finalize(){} virtual ~S();};S::~S(){finalize();}
