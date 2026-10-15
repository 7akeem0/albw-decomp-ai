#include "range.h"
struct Member420 {void*ptr;u8 pad4[0x28-4];u8 active;~Member420(){if(active){ptr=0;active=0;}}};
struct Obj420 {virtual ~Obj420();Member420 member;};
Obj420::~Obj420(){}
