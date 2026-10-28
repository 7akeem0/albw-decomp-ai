typedef int s32;
typedef unsigned int u32;
extern void* operatorNewArray(u32 size, void* heap, s32 align);
struct ArrayImpl {
    s32 count;   /* +0 */
    u32 cap;     /* +4 */
    void* buf;   /* +8 */
};
typedef struct ArrayImpl ArrayImpl;
void f(ArrayImpl* a, u32 n_arg, void* heap, s32 align) {
    if ((s32)n_arg <= 0) return;
    u32 n = n_arg;
    void* p = operatorNewArray(n * 4, heap, align);
    if (p) {
        a->buf = p;
        a->count = 0;
        a->cap = n;
    }
}
