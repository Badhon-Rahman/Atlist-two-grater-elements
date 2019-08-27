#include <iostream>

using namespace std;

void GreaterElements(int arr[], int arrSize){
         int coun;

         cout << "Elements have at list two grater elements: ";
         for(int i = 0; i < arrSize; i++){
            coun = 0;
            for(int j = 0; j < arrSize; j++){
                if(arr[i] < arr[j]){
                    ++coun;
                }
            }
            if(coun >= 2){
               cout << arr[i] << " ";
            }
         }
}

int main()
{
    int arrSize;
    cout << "Enter the array size:";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter the array elements: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }

    GreaterElements(arr, arrSize);
    return 0;
}
