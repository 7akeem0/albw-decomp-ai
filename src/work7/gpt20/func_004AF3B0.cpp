#include "ladder_types.h"
struct Member4AF {~Member4AF();u32 a;};
struct Object4AF {u32 a;Member4AF m;~Object4AF();};
Object4AF::~Object4AF() {}
