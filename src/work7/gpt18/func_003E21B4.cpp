#include "range.h"
struct E{f32 base,reserved,slope,other;};extern const E ro_006A6D54[];f32 f(u32 angle){f32 t=f32(angle&255)*(1.f/256.f);const E&e=ro_006A6D54[angle>>8];return e.base+e.slope*t;}
