#include<iostream>
using namespace std;
void shiftingAnArray(int arr[], int size, int shift){
    int finalshift = shift%size;
    if(finalshift == 0)
    {
        //NO NEED TO DO ANYTHING
        return;
    }

    // STEP:- 1 COPY THE LAST N ELEMENTS INTO A TEMP ARRAY
    int temp[10000];
    int index =0;
    for(int i = size - finalshift; i< size; i++)
    {
        temp[index] = arr[i];
        index++ ;
    }

    //STEP:- 2 SHIFT ARRAY ELEMENTS BY FINALSHIFT PLACES
    for (int i=size - 1; i>=0; i--)
    {
        //if(i-size >=0) //CONDITION TO STOP 
        //{
            arr[i] = arr[i-finalshift];
        //}
    }

    //STEP:- 3 COPY TEMP ELEMENTS INTO ORIGINAL ARRAY
    for(int i=0; i<finalshift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    //CYCLICALLY ROTATING THE ARRAY BY 2 PLACES
    int shift = 2;

    cout<<"Before : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<<"  ";
    }
    cout<<endl;

    shiftingAnArray(arr, size, shift);

    //PRINTING ARRAY
    cout<<"After : "<<endl;
    for(int i=0; i< size; i++)
    {
        cout<< arr[i] <<"  ";
    }
    cout<<endl;

    return 0;
}