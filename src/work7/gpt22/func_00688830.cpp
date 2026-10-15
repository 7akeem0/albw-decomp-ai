#include "range.h"
ListItem22* f_00688830(ListOwner22* p,ListItem22* item){ListNode22* n=item->node.next;return n==&p->root?0:(ListItem22*)((char*)n-0x5c);}
