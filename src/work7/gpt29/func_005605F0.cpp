#include "range.h"
struct Request5605 { char pad[0xc]; u32 index; s8 a,b; };
struct Record5605 { char pad[0x48]; s8 a,b; char tail[2]; };
struct Target5605 { char pad[0x1458]; SafeSlots<Record5605,6> slots; };
void f_005605F0(Request5605* request,Target5605* target){u32 index=request->index;s8 a=request->a;s8 b=request->b;Record5605& record=target->slots[index];record.a=a;record.b=b;}
