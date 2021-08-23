#include <iostream>
using namespace std;

void printArray(int * A,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<A[i];
    }
    
}
void selectionsort(int * A, int size){

    int indexmin,temp;
    for (int i = 0; i < size; i++)
    {    indexmin=i;
        for (int j = i+1; j < size; j++)
        {
            if(A[j]<A[indexmin]){
                indexmin=j;
            }
        }
        temp=A[i];
        A[i]=A[indexmin];
        A[indexmin]=temp;


        
    }
    
}


int main(){
    int A[]={5,4,3,2,1};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<"Before sorting \n";
    printArray(A,size);
    cout<<"After sorting";
    selectionsort(A,size);
    printArray(A,size);
        return 0;
}