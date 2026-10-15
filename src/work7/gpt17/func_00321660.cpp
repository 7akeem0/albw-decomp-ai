#include "range.h"
struct Sub {u8 pad[0x80];u8 flag;void set(u8 n){flag=n;}};
extern Sub* data_00711F50;
void f_00321660(){data_00711F50->set(1);}
