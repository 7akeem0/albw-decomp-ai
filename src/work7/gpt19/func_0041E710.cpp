#include "range.h"
struct Stride {u32 v;Stride(u32 n):v(n){}};
u32 impl(u32 n,Stride stride){return ((n*stride.v+15)&~3u)<<2;}
u32 f_0041E710(u32 n){return impl(n,Stride(78));}
