#include<iostream>
#include<stdio.h>

using namespace std ; 

void Rotate(int * Arr , int iSize  , int d)
{
    int i = 0  ;
    while (d--)
    {
        int last = Arr[i];
        for (int j = 0 ; j< iSize ; j++)
        {
            Arr[j] = Arr[j+1];
        }
        Arr[iSize -1] = last;
    }
}

int main()
{
    int iSize = 0 ; int d = 0 ; 
    printf("Enter Size of elements \n ");
    cin>> iSize;
    cout<<"Enter Positions to Rotate\n";
    cin>>d;

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
    cout<<"Rotate array is : \n";
    Rotate(Arr , iSize , d);
    for (int iCnt = 0 ;  iCnt < iSize ; iCnt ++)
    {
        cout<<Arr[iCnt];
    }
    printf("\n");

    return 0;
}