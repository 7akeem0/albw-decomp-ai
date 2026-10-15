typedef struct Array48{int size,cap;int* data;}Array48;
extern void FUN_0010e74c(void*,const void*,unsigned);
void FUN_0048c320(Array48*a,int start,int n){if(start<0||n<0)return;int size=a->size;int end=start+n;if(size>=end){if(size>end){int left=size-end;int* dst=a->data+start;FUN_0010e74c(dst,a->data+end,left*4);}a->size=a->size-n;}}
