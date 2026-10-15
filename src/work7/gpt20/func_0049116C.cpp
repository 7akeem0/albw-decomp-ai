#include "ladder_types.h"
namespace sead {struct IDisposer {virtual ~IDisposer();void* heap;void* prev;void* next;};}
struct Object491: sead::IDisposer {void finalize(){} virtual ~Object491();};
Object491::~Object491() {finalize();}
