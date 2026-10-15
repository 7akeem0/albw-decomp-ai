#include "../../work7/gpt15/range.h"
struct Base_004A1520{u8 pad[12];virtual ~Base_004A1520();};
struct S:Base_004A1520{virtual ~S();};
S* gOther;S* gCurrent;
S::~S(){if(this==gCurrent){gCurrent=0;gOther=0;}}
