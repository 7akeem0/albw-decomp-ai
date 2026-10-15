// func_0048C428  heapsort over a pointer array with a user comparator.
//   r0 = container { int count; int cap; void** data; }
//   r1 = int (*cmp)(void*, void*)
typedef unsigned int u32;

typedef int (*Cmp)(void* a, void* b);

struct SortBuf {
    int     count;   // +0x0
    int     cap;     // +0x4
    void**  data;    // +0x8
};

// sift-down of the value `tmp` starting at 1-based position `i`, heap size n.
// Node i has children 2*i-1 and 2*i (0-based array indices).
static void sift(void** a, int i, int n, void* tmp, Cmp cmp) {
    int child = 2 * i;
    while (child <= n) {
        if (child < n && cmp(a[child - 1], a[child]) < 0)
            child++;
        if (cmp(tmp, a[child - 1]) >= 0)
            break;
        a[i - 1] = a[child - 1];
        i = child;
        child = 2 * child;
    }
    a[i - 1] = tmp;
}

void func_0048C428(SortBuf* buf, Cmp cmp) {
    int n = buf->count;
    void** a = buf->data;

    for (int s = n / 2; s >= 1; s--) {
        int i = s;
        int c = 2 * i;
        void* tmp = a[i - 1];
        while (c <= n) {
            if (c < n && cmp(a[c - 1], a[c]) < 0)
                c++;
            if (cmp(tmp, a[c - 1]) >= 0)
                break;
            a[i - 1] = a[c - 1];
            i = c;
            c = 2 * i;
        }
        a[i - 1] = tmp;
    }

    while (n > 1) {
        void* tmp = a[n - 1];
        a[n - 1] = a[0];
        n--;
        int i = 1;
        int c = 2;
        if (n >= 2) {
            while (1) {
                if (c < n && cmp(a[c - 1], a[c]) < 0)
                    c++;
                if (cmp(tmp, a[c - 1]) >= 0)
                    break;
                a[i - 1] = a[c - 1];
                i = c;
                c = 2 * i;
                if (c > n)
                    break;
            }
        }
        a[i - 1] = tmp;
    }
}
