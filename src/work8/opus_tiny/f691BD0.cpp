// 0x691BD0: sead::BufferedSafeString::assureTerminationImpl_() (vtable slot; 3 vtables point here)
typedef int s32;
struct SafeString { virtual ~SafeString(); const char* mStringTop; };
struct BufferedSafeString : SafeString {
    s32 mBufferSize;
    char* getMutableStringTop() { return const_cast<char*>(mStringTop); }
    virtual void assureTerminationImpl_();
};
void BufferedSafeString::assureTerminationImpl_() { char* p = getMutableStringTop(); p[mBufferSize - 1] = '\0'; }
