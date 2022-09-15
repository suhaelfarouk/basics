#include <iostream>
using namespace std;

int main()
{
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    int unluckyNums[6] = {2, 4, 8, 12, 14};
    int nums[20];


    unluckyNums[5] = 16;
    luckyNums[0] = 19;
    nums[0] = 100;
    nums[1] = 200;

    cout << luckyNums[0] << endl;
    cout << unluckyNums[5] << endl;
    cout << nums[0] << endl;
    cout << nums[1] << endl;

    return 0; 
}