#include "range.h"
struct File30;
struct PathSpan30 {u32 length;const u16*text;};
struct PathOutput30 {u32 token;PathSpan30 span;};
struct ReadRecord30 {u32 words[3];};
extern "C" u32 func_0068F324(File30*,u32*,ReadRecord30*,void*,u32*,u32);
extern "C" u32 func_003D2704(PathSpan30*,const PathSpan30&,const u16*);
extern "C" u32 func_0068F9A8(File30*,void*,u32,PathOutput30*);
u32 finish(PathOutput30* out,u32 mode,void* arg,File30* file){u32 result=func_0068F9A8(file,arg,mode,out);if(static_cast<s32>(result&0x80000000u)>=0)result=0;return result;}
u32 target(File30*file,void*arg,PathOutput30*out,u32 mode,u32 size,PathSpan30 path,const u16*begin){
    u32 token;ReadRecord30 extra;
    u32 result=func_0068F324(file,&token,&extra,0,0,size);
    if(static_cast<s32>(result&0x80000000u)<0)return result;
    out->token=token;
    result=func_003D2704(&out->span,path,begin);
    if(static_cast<s32>(result&0x80000000u)<0)return result;
    return finish(out,mode,arg,file);
}
