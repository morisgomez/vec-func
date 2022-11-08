#include <iostream>
#include <vector>
using namespace std;

bool isfactor(int n, const vector<int> & vec) //vector para is a reference one.
{
bool flag = false; // will change in if-else statements.
for (int counter = 0; counter < vec.size(); counter++)
{
    if (vec[counter] % n == 0) //arithmetic logic for factor check.
    {
        flag = true;
    }
    else
    {
        flag = false;
        break; //break bc no need to continue looping once flag = false.
    }
}//closes for loop
return flag;
}

int main ()
{
    int n = 3;
    vector<int> userVec = {10, 20, 30, 40};
    bool isFactorFinal = isfactor (n, userVec);
    if (isFactorFinal)
    {
        cout << "your number " << n << " is a factor of all your numbers."; //if true.
    }
    else
    {
        cout << "your number " << n << " is not a factor of all your numbers."; //if false.
    }
    return 0;
}
