#include <iostream>
using namespace std;

class BinarySearch
{
private:
    int *A;
    int size;
    int length;

public:
    BinarySearch(int size)
    {
        this->size = size;
        A = new int[size];
    }
    void create()
    {
        cout << "give the length of the term"<<" "<<":";
        cin >> length;
        cout << "give the terms"<<" "<<":";
        for (int i = 0; i < length; i++)
        {
            cin >> A[i];
        }
    }
    int Bsearch(BinarySearch *Bsearch, int key)
    {
        int l, mid, h;
        l = 0;
        h = Bsearch->length - 1;

        while (l < h)
        {
            mid = (l + h) / 2;

            if (key == Bsearch->A[mid])
            {
                cout << "found";
                return mid;
            }
            else if (key < Bsearch->A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }
    void display() {

    }
};

int main()
{
    int key;
    BinarySearch srch(20);
    srch.create();
    cout << "give the no to search"<<" "<<":";
    cin >> key;
    srch.Bsearch(&srch,key); 
    cout<<srch.Bsearch(&srch,key);
    return 0;
}