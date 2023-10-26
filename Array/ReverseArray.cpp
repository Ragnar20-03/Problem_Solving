#include<iostream>
#include<stdio.h>

using namespace std ; 

void Reverse(int * Arr , int iSize )
{
    int i = 0  , temp = 0 ; 
    int j  = iSize -1 ;
    while ( i< j)
    {
        temp = Arr[i];
        Arr[i] = Arr[j];
        Arr[j] = temp;

        i++ ; 
        j--;
    }
}

int main()
{
    int iSize = 0 ; 
    printf("Enter Size of elements \n ");
    cin>> iSize;

    int Arr[iSize];
    printf("Enter Elements : \n");
    for (int iCnt = 0 ;  iCnt < iSize ; iCnt ++)
    {
        cin>>Arr[iCnt];
    }
    cout<<"Elements of array are : \n";
    for (int iCnt = 0 ;  iCnt < iSize ; iCnt ++)
    {
        cout<<Arr[iCnt];
    }
    printf("\n");
    cout<<"reverse array is : \n";
    Reverse(Arr , iSize);
    for (int iCnt = 0 ;  iCnt < iSize ; iCnt ++)
    {
        cout<<Arr[iCnt];
    }
    printf("\n");

    return 0;
}