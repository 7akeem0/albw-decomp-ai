#include "../../range.h"
struct Base_00110778{virtual ~Base_00110778();};struct Object:Base_00110778{char pad[0x20];void*p;void clear();virtual ~Object();};void Object::clear(){if(p)p=0;}Object::~Object(){clear();}
