#include "../range_types.h"
namespace sead {struct IDisposer{virtual ~IDisposer();char storage[12];};}
struct MemberA26E{~MemberA26E();char storage[0x58];};
struct MemberB26E{~MemberB26E();char storage[0x128];};
struct MemberC26E{~MemberC26E();char storage[0x64];};
struct MemberD26E{~MemberD26E();u32 storage;};
struct Obj26E:sead::IDisposer{MemberA26E a;MemberB26E b;MemberC26E c;MemberD26E d;virtual ~Obj26E();};
Obj26E::~Obj26E(){}
