#include "range.h"
namespace sead {struct IDisposer {virtual ~IDisposer();char pad[12];};}
struct Member3306 {~Member3306();u32 value;};
struct Obj3306:sead::IDisposer {Member3306 member;virtual ~Obj3306();};
Obj3306::~Obj3306(){}
