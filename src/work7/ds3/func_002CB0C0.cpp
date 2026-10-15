#include "ds3.h"
struct SafeString { virtual void vf(); const char* str; SafeString(const char* s) : str(s) {} };
struct S2CB0C0 { char pad[0x10]; u32 m10; char pad2[0x18-0x14]; u8 b18; };
extern "C" u32 func_0010B954(u32, const SafeString&, int, int, int);
static const char kMsgFlowHeap[] = "MsgFlowHeap";
void func_002CB0C0(S2CB0C0* self, int a1) {
    self->m10 = func_0010B954(0x800, SafeString(kMsgFlowHeap), a1, 1, 0);
    self->b18 = 0;
}
