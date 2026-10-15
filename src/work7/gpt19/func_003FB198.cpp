#include "range.h"
struct S {u32* items;u32 count;};
struct Index {u32 v;Index(u32 n):v(n){}operator u32()const{return v;}Index&operator++(){++v;return*this;}};
extern "C" void f_003FB198(S* s,u32* items,u32 n){s->items=items;s->count=n;for(Index i(0);i<n;){u32 j=i;++i;s->items[j]=0;}}
