#include <iostream>
#include <vector>
using namespace std;

int main ()
{
   
    int target =75 ;
    vector<int> v3 = {15, 7, 6, 9, 81,76,77,75};
    int vectorAns = -1; 

    for (int i = 0; i < v3.size(); i++) {
        if (v3[i] == target)
        {
            vectorAns = i; 
            break;         
        }
    }
    cout << "Vector Result: " << vectorAns << endl;


    
    int arr[6] = {15, 7, 6, 9, 81}; 
    int arrayAns = -1;

    for (int i = 0; i < 5; i++) 
    {
        if (arr[i] == 7)
        {
            arrayAns = i;
            break; 
        }
    }
    cout << "Array Result: " << arrayAns << endl;

    return 0; 
}