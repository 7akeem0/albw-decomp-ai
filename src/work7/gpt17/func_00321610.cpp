#include "range.h"
struct Sub {u8 pad[0x74];u16 mode;void setMode(bool n){mode=n;}};
extern Sub* data_00711F50;
void f_00321610(void*,s32 n){if(n>=0)data_00711F50->setMode(n!=0);}
