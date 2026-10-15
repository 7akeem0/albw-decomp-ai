#include "range.h"
struct Base_0045F2F8:Primary38_22,Secondary4_22{u8 rest[0xf0-0x3c];Base_0045F2F8(s32);};
struct WindowVariant22:Base_0045F2F8{WindowVariant22():Base_0045F2F8(1){}};
WindowVariant22*target(Heap22*heap){ScopedHeap22 scoped(heap);WindowVariant22*result=new(heap,4)WindowVariant22;return result;}
