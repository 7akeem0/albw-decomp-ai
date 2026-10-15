#include "ds3.h"
struct S3192BC { char pad[0x420]; void* m420; u32 m424; u8 buf[0x4da-0x428]; u8 m4da; };
extern "C" void func_0014E2A0(S3192BC*, u32, void*, int, int, int);
void func_003192BC(S3192BC* self) {
    func_0014E2A0(self, self->m424, self->buf, 0x100, 0, 0);
    if (((u8*)self->m420)[0x21] == 0x11) self->m4da = 1;
}
