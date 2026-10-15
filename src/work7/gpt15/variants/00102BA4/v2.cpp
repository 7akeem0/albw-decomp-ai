#include "../../range.h"
extern "C" u32 data_00715878;extern "C" const u32 ro_006B4764;__svc(0x23)u32 closeHandle(u32);extern "C" void func_0010873C(u32,u32,u32);struct Result{u32 v;};u32 sign(Result r){return r.v>>31;}inline void diagnose(u32 r,u32 pc){Result value={r};u32 s=sign(value);if(s)func_0010873C(r,pc,s);}u32 closeService(){u32 r;if(data_00715878==0)r=0xe0a0cff8u;else{r=closeHandle(data_00715878);data_00715878=ro_006B4764;}return r;}extern "C" u32 func_00102BA4(){u32 r=closeService();diagnose(r,__current_pc());return r;}

