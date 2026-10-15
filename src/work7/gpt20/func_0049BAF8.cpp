#include "ladder_types.h"
__svc(0x23) s32 closeHandle49BA(u32);
struct Handle49BA {u32 value;~Handle49BA(){if(value){closeHandle49BA(value);value=0;}}};
struct Disposer49BA:Disposer4A15 {Handle49BA handle;virtual ~Disposer49BA();};
Disposer49BA::~Disposer49BA(){}
