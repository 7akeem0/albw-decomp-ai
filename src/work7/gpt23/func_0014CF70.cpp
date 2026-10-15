#include "range.h"
struct B{virtual~B();char pad[0x1ac-4];};extern void*data_00712F70;
struct F{u8 active;~F(){if(active)data_00712F70=0;}};struct D:B{F flag;virtual~D();};D::~D(){}
