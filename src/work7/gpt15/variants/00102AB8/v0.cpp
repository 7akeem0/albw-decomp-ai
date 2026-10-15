#include "../../range.h"
typedef void (*Fn)(void*);
struct Global {u8 pad[0x40];Fn callbacks[16];void*contexts[16];};
extern Global data_00714888;
void func_00102AB8(){if(data_00714888.callbacks[0])data_00714888.callbacks[0](data_00714888.contexts[0]);if(data_00714888.callbacks[1])data_00714888.callbacks[1](data_00714888.contexts[1]);}

