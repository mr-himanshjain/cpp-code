#include <iostream>
using namespace std;

int maximumProduct(int nums[4])
{
    int val = nums[0];
    for (int i = 1; i < 4; i++)
    {
        val *= nums[i] ;
    }
    return val;
}
int main()
{
    int nums[] = {1, 2, 3, 4};
    cout<<"the product is: "<<maximumProduct(nums);
    return 0;
}