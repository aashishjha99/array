#include<iostream>
using namesace std;
struct array
{
    int a[10];
    int size;
    int length;
};
void  display(struct array *ar)
{
    int i;
    for(int i=0;i<length;i++)
    {
        cout<<"the elements are"<<i<<" "<<"=";
        cout<<ar.a[i]<<endl;
    }
}
void append(struct array *ar,int x)
{
    if(ar->length<ar->size)
    {
        ar->a[ar->length++]=x;

    }
}
void insert(struct array *ar,int index,int x)
{
    if(index>=0 && index <=ar->length)
    {
        for(i=ar->length;i<index;i--)
        {

        ar->a[i]=ar->a[i-1];
        
        }

         ar->[index]=x;
        ar->length++;

    }
   

}
int main()

{ struct array ar={‌{1,2,3,4,5},10,5};

    display(ar);

    cout << "insert an element at last - " << endl;

    append(&ar,6);

    display(ar);

    cout<<"insert in btw"<<endl;

    insert(&ar,0,0);

    display(ar);

    return 0;

}