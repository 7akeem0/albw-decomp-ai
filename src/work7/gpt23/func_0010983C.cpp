#include "range.h"
struct ThreadValue68 { char pad0[0x68]; u32 value; };
struct ThreadSub24 { char storage[4]; };
struct ThreadMgr { char pad0[0x24]; ThreadSub24 current; };
extern ThreadMgr* data_00715430;
extern "C" ThreadValue68* func_0010E294(ThreadSub24*);
extern "C" u32 func_0010983C(u32 unused,u32 value) {
    ThreadValue68* thread = func_0010E294(&data_00715430->current);
    u32 old = thread->value;
    thread->value = value;
    return old;
}
