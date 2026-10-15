#include "factory132.h"
struct Window00681308:WindowBase30 {
    Window00681308():WindowBase30(8){func_00488208();}
};
Window00681308* target(Heap30* heap){
    ScopedHeapSwitch30 scoped(heap);
    return new(heap,4)Window00681308;
}
