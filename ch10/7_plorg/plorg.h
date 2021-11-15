#ifndef PLORG_H_
#define PLORG_H_
class Plorg{
    private:
        char name[20];
        int ci;
    public:
        Plorg(char nm[20] = "Plorga", int in = 50);
        void setci(int in = 50);
        void showplorg();
};
#endif
