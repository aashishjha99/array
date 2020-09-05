#include <iostream>

using namespace std;

class arry
{
private:
    int *A;
    int size;
    int length;

public:
    arry(int size)
    {
        this->size = size;
        A = new int[size];
    }
    void create()
    {
        cout << "give the nth term";
        cin >> length;
        cout << "give the terms in array";
        for (int i = 0; i < length; i++)
        {
            cin >> A[i];
        }
    }
    int get(arry ary, int index)

    {
        

        if (index >= 0 && index < ary.length)
        
            return ary.A[index];
        
        return -1;

        
    }

    int set(arry *ary, int index , int value)
    {
      
        if (index >= 0 && index < ary->length)
        ary->A[index] = value;

    }
    int max(arry ary )
    {
        int max = ary.A[0];
        int i;

        for (int i = 1; i < ary.length; i++)
        {
            if (ary.A[i]>max)
            {
                max = ary.A[i];
            }
        }
        return max;
    }
    int min(arry ary)
    {
        int min = ary.A[0];
        int i;

        for (int i = 1; i < ary.length; i++)
        {
            if (ary.A[i]<min)
            {
                min = ary.A[i];
            }
        }
        return min;
    }
    int sum(arry ary)
    {
        int sum = 0;
        for (int i = 0; i <ary.length; i++)
        {
            sum += ary.A[i];
        }
        return sum;
    }
    float avg(arry ary)
    {

       return  (float) sum(ary)/ary.length;

    }
    void display(arry ary)
    {
        for(int i=0;i<ary.length;i++)
        {
            cout<<ary.A[i]<<" ";
        }
    }
};

int main()
{
    int in, x, p, value, k;
    arry ary(20);
    ary.create();
    cout << "give the index value";
    cin >> x;
    ary.get(ary, x);
    cout << "number we get"
         << " "
         << ":" << ary.get(ary,x)<<endl;
    cout << "give the value and index to set"<<endl;
    cin >> p >> value;
    ary.set(&ary, p, value);
    ary.display(ary);
    //cout << "values are"
       //  << " "
       //  << ":" <<ary.display(ary)<<endl;
    cout <<endl << "give the max terms"<<" ";
    cout << ary.max(ary)<<endl;
    cout << "give the min term ";
    cout<<"give the min term"<<" "<<ary.min(ary)<<endl;
    cout << "sum is "
         << " "
         << ":" <<ary.sum(ary)<<endl;
   
    cout << "average is"
         << " "
         << " : "<< ary.avg(ary)<<endl;

    return 0;
}
