#include "factory132.h"
struct Window00681164:WindowBase30 {
    Window00681164():WindowBase30(0){func_00488208();}
};
Window00681164* target(Heap30* heap){
    ScopedHeapSwitch30 scoped(heap);
    return new(heap,4)Window00681164;
}
