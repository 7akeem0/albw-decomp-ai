namespace sead {struct IDisposer {virtual ~IDisposer();};}
struct Obj28D5: sead::IDisposer {virtual ~Obj28D5(); void finish(){} };
Obj28D5::~Obj28D5(){finish();}
