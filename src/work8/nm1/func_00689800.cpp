#include "../../work7/gpt30/range.h"
struct Index {s32 v;Index(s32 n):v(n){}operator s32()const{return v;}Index&operator++(){++v;return *this;}};
struct Safe {virtual~Safe();virtual void assure()const;const char*text;const char*cstr()const{assure();return text;}s32 length()const;};
struct Buffered:Safe{s32 capacity;};
extern "C" void*func_0010E3C4(void*,const void*,u32);
void assure(const Safe*const&s);
s32 length(const Safe*const&s){assure(s);const Safe*q=s;const char*p=q->text;Index n(0);for(;n<=0x40000;++n)if(p[n]==0)break;if(n>0x40000)return 0;return n;}
void copy(char*dst,const char*src,s32 n){func_0010E3C4(dst,src,n);}
s32 target(Buffered*p,const Safe*src,s32 count){
    char*const&buffer=const_cast<char*>(p->text);
    if(count<0)count=length(src);
    if(p->capacity<=count)count=p->capacity-1;
    copy(buffer,src->cstr(),count);
    buffer[count]=0;return count;}
void assure(const Safe*const&s){s->assure();}
