#include "../../range.h"
struct Interval30{u16 low,high;bool contains(u32 n)const{return low<=n && n<=high;}};
struct IntervalNode30{IntervalNode30*prev;IntervalNode30*next;Interval30 interval;};
struct IntervalSet30{u32 pad0;u8 mode;u8 pad5;u16 single;IntervalNode30 root;};
struct Iter{IntervalNode30*p;Iter(IntervalNode30*n):p(n){}bool operator!=(const Iter&)const;Iter&operator++(){p=p->next;return *this;}};
inline bool Iter::operator!=(const Iter&n)const{return p!=n.p;}
bool target(IntervalSet30*p,u32 n){switch(p->mode){case 2:return p->single==n;case 3:{Iter end(&p->root);for(Iter i(p->root.next);i!=end;++i){if(i.p->interval.contains(n))return true;}return false;}default:return false;}}
