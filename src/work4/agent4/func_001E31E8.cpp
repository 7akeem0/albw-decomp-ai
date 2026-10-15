typedef unsigned char u8;
struct Mgr { char pad[0x25]; u8 m25; void setM25(u8 v) { m25 = v; } };
extern Mgr* data_00712468;
struct TaskBase {
    TaskBase(void* arg, const char* name);   // 0x25D9E8
    virtual void v0();
};
class TaskMainGame : public TaskBase {
public:
    TaskMainGame(void* arg);
    virtual void v0();
};
TaskMainGame::TaskMainGame(void* arg) : TaskBase(arg, "TaskMainGame") {
    data_00712468->setM25(0);
}
