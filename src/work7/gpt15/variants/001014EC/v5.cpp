#include "../../range.h"
extern u32 data_0071613C;extern const u32 ro_006A7FEC;__svc(0x23) u32 closeHandle(u32);struct Result{u32 v;};u32 sign(Result r){return r.v>>31;}u32 func_001014EC(){if(data_0071613C){u32 r=closeHandle(data_0071613C);Result value={r};if(sign(value))return r;data_0071613C=ro_006A7FEC;}return 0;}
