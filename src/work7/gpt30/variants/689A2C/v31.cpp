#include "../../range.h"
struct Base { char* buffer; virtual ~Base(); Base(char* b):buffer(b){} };
struct S:Base { s32 capacity; S(char*,s32); };
S::S(char*b,s32 c):Base(b),capacity(c){if(capacity<=0){buffer=0;capacity=0;}else{char* p=buffer; p[capacity-1]=0;}}
