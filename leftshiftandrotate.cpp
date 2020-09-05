#include<iostream>
using namespace std;
 
class arry
{
    private:
        int *A;
        int *B;
        int size;
        int length;
    public:
        arry(int size)
        {
            this->size = size;
            A = new int[size];
            B = new int [size];
 
        }
        void create()
        {
            cout<<"give the limit";
            cin>>length;
            cout<<"give the terms";
            for (int i = 0; i < length; i++)
            {
                cin>>A[i];
            }
 
        }
        void display(arry arr)
        {
            cout<<"tems in array are"<<" ";
            for(int i=0;i<arr.length;i++)
            {
                cout<<A[i]<<" ";
            }
            cout<<endl;
 
        }
         void reverse(arry *arr)
         {
             int i,j;
             //int *B;
             //B = new int[size];
            cout<<endl;
            cout<<"revers"<<endl;
            for(i = arr->length-1,j = 0;i>=0;i--,j++)
            {
                B[j] = arr->A[i];
 
            }
            for(i=0;i<arr->length;i++)
            {
               arr->A[i] = B[i];  // here it should be B[i] not B[j]
            }
         }
 
         void Reverse2(arry *arr)
    {
            int i,j;
            for(i=0,j=arr->length-1;i<j;i++,j--)
        {
            swap(&arr->A[i],&arr->A[j]);
        }
    }
        void swap(int *x,int *y)
        {
            int temp=*x;
            *x=*y;
            *y=temp;
        }
 
 
 
 
 
 
};
int main()
{
    arry arr(10);
    arr.create();
    arr.display(arr);
  // arr.reverse(&arr);
   // arr.display(arr);
    arr.Reverse2(&arr);
    arr.display(arr);
   return 0;
 
}