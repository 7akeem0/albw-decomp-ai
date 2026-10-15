#include "range.h"
void setFrame389(Frame389* frame,f32 end,f32 current) {
    if(current!=end){frame->current=end;frame->changed=1;}
}
void func_003897DC(Obj389D* p) {
    Frame389* frame=p->holder->frame;
    setFrame389(frame,frame->end,frame->current);
}
