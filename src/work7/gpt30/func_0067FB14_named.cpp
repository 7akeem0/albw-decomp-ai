#include "range.h"
struct Rect30 {f32 left,top,right,bottom;Rect30():left(0.f),top(0.f),right(0.f),bottom(0.f){}f32 width()const{return right-left;}};
struct TextWriter30{
    u8 pad0[0x10];f32 cursorX,cursorY;u8 pad18[0x48-0x18];
    TextWriter30(const TextWriter30&);~TextWriter30();
    void measure(Rect30*,const u16**,s32);
};
extern "C" void func_00110D44(void*,const void*,u32);
TextWriter30::TextWriter30(const TextWriter30&v){TextWriter30*dest=this;func_00110D44(dest,&v,0x48);cursorX=0.f;cursorY=0.f;}
f32 target(const TextWriter30*p,const u16*text,s32 count){Rect30 rect;TextWriter30 copy(*p);copy.measure(&rect,&text,count);return rect.width();}
