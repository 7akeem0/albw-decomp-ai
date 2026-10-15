#include "range.h"
bool f_0016B658(Obj_0016B658*p,u32 i){Entry_0016B658&e=p->array[i];if(e.child){if(!(e.child->flags&4)){if(e.flag&&p->flag)return true;}else{return true;}}return false;}
