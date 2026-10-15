#include "range.h"
extern "C" bool func_001118B8(ModeOwner111* p) {
    switch(p->mode) {
    case 1:return p->byteChild->flag!=0;
    case 2:case 3:return (p->halfChild->flags&8)!=0;
    default:return false;
    }
}
