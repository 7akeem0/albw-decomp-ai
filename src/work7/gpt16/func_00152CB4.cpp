namespace sead{struct IDisposer{virtual ~IDisposer();char pad[0x1c];};}
struct Mem152{~Mem152();unsigned x;}; // D1=003D0FA4
struct Obj152:sead::IDisposer{Mem152 member;virtual ~Obj152();}; // vt006C7F9C
Obj152::~Obj152(){}
