#include "range.h"
struct N {N* next;};
extern "C" void f_0041D7FC(N** head,u32 from,u32 size){u32 end=from+size;N** prev=head;for(N* n=*head;n;n=n->next){if(from<=(u32)n&&(u32)n<end)*prev=n->next;else prev=&n->next;}}
