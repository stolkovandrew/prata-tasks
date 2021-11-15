#ifndef LIST_H_
#define LIST_H_
class List{
    private:
        double array[20];
        int index;
    public:
        List();
        int add(double d); //returns 1 if successful, 0 otherwise
        int isFull(); //returns 1 if full, 0 otherwise
        int isEmpty(); //returns 1 if empty, 0 otherwise
        void show();
        void visit(void (*pf) (double &));
};
void mul2(double &d);
void mul5(double &d);
#endif
