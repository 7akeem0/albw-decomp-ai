#include "range.h"
extern DiagnosticRecord12 data_0079CCA8;
extern "C" void func_00104560(DiagnosticRecord12*);
inline s32 severity(u32 result){s32 value=result>>27;if(result&0x80000000)value-=32;return value;}
inline void dispatch(u32 result,u32 pc){DiagnosticRecord12* record=&data_0079CCA8;record->active=0;record->tag=0xcaca;record->kind=0;record->result=result;record->pc=pc;func_00104560(record);}
extern "C" void func_0010873C(u32 result,u32 pc){s32 level=severity(result);if(level==1||level==-7)return;dispatch(result,pc);}