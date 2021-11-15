#include <string>
#ifndef ACC_H_
#define ACC_H_
class Account{
private:
    std::string clientName;
    std::string accNumber;
    double accBalance;
public:
    Account(std::string cn = "Placeholder Name", std::string an = "000000000", double ab = 0.0);
    ~Account();
    void showAcc();
    int changeBalance(double d);
};

#endif
