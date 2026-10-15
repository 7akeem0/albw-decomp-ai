#include "range.h"
namespace sead24 {struct SafeString {virtual void assure()const;const char*text;};}
struct Object2593 {char pad[0x4c];void*a;void*b;};
extern void* func_00294404(void*,const sead24::SafeString&,s32,bool,bool);
extern void func_00259384(void*,const sead24::SafeString&);
void target(Object2593*p,const sead24::SafeString&name,s32 n){func_00294404(p->a,name,n,false,false);func_00259384(p->b,name);}
