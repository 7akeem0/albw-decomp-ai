#include "range.h"
struct Base416 {Base416();virtual ~Base416();u8 pad4[0x48-4];};
struct Zeros416 {u32 a,b;Zeros416():a(0),b(0){}};
struct Obj416:Base416 {Zeros416 zeros;Obj416();};
Obj416::Obj416(){}
