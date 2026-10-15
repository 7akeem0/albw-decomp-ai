#include "range.h"
struct Owner56A204 { char pad[0x98]; u8 valid; char gap99[0x11d-0x99]; u8 ready; char gap11e[0x1c0-0x11e]; u8 count; };
bool f_0056F3A4(Owner56A204* p){return p->ready||(p->valid&&p->count>=3);}

