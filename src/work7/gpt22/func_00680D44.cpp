#include "range.h"
struct Base_00486CB4:Primary38_22,Secondary4_22{u8 rest[0xe4-0x3c];Base_00486CB4(s32);};
struct WindowVariant22:Base_00486CB4{WindowVariant22():Base_00486CB4(1){}};
WindowVariant22*target(Heap22*heap){ScopedHeap22 scoped(heap);WindowVariant22*result=new(heap,4)WindowVariant22;return result;}
