#include "range.h"
extern void func_004F68AC(Object5015*, u32);
void Object5015::update(u32 a) { saved = position; func_004F68AC(this, a); }
