#include "../range_types.h"
#include "../../../work4/agent3/dtor_1E7.h"
struct Member279B;
extern "C" void func_0036D0E0(Member279B*);
struct Member279B {char storage[0x54];~Member279B();};
struct Secondary279B {virtual void v0();char pad[0x14c];};
struct Base279B : ActorBaseA,Secondary279B {virtual ~Base279B();};
struct Obj279B : Base279B {Member279B member;void finalize(){};virtual ~Obj279B(){finalize();};};
Member279B::~Member279B(){func_0036D0E0(this);}
struct Outer279B : Obj279B {virtual ~Outer279B();};
Outer279B::~Outer279B(){}
