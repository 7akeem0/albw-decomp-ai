#include "../../range.h"
struct T{char pad[0x68];u32 value;};struct G{char pad[0x24];u32 sub;};extern G*data_00715430;extern "C" T*func_0010E294(void*);extern "C" u32 func_0010DB90(){return func_0010E294(&data_00715430->sub)->value;}
