#ifndef GOLF_H_
#define GOLF_H_
const int Len = 40;
class Golf{
    private:

    char fullname[Len];
    int handicap;
    
    public:
    Golf();
    Golf(const char* name, int hc);
    int chnghc();
    void show();
    int setgolf();
};
#endif
