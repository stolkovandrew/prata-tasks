//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 9--------------
#include <iostream>
#include <cstring>
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(){
    std::cout << "Enter class size: ";
    int class_size;
    std::cin >> class_size;
    while (std::cin.get() != '\n'){
        continue;
    }
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    std::cout << "Done\n";
    return 0;
}
int getinfo(student pa[], int n){
    int i = 0;
    while (i < n){
        std::cout << "Enter full name of student #" << i + 1 << ": ";
        std::cin.getline(pa[i].fullname, SLEN);
        if (!(strcmp(pa[i].fullname, "")))
            break;
        std::cout << "Enter their hobby: ";
        std::cin.getline(pa[i].hobby, SLEN);
        std::cout << "Enter their OOP level: ";
        std::cin >> pa[i].ooplevel;
        std::cin.get();
        i++;
    }
    return i;
}
void display1(student st){
    std::cout << "\nStudent's name is:\t" << st.fullname;
    std::cout << "\n          hobby is:\t" << st.hobby;
    std::cout << "\n          OOP level is:\t" << st.ooplevel;
}
void display2(const student * ps){
    std::cout << "\nStudent's name is:\t" << ps->fullname;
    std::cout << "\n          hobby is:\t" << ps->hobby;
    std::cout << "\n          OOP level is:\t" << ps->ooplevel;
}
void display3(const student pa[], int n){
    for (int i = 0; i < n; i++){
        std::cout << "\nStudent's name is:\t" << pa[i].fullname;
        std::cout << "\n          hobby is:\t" << pa[i].hobby;
        std::cout << "\n          OOP level is:\t" << pa[i].ooplevel;
    }
}
