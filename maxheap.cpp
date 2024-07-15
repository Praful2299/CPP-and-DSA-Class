#include<iostream>
using namespace std;

class heaps
{
    int arr[50];
    int size;
    int index;
public:
    heaps()
    {
        size=0;
    }

    void heapadd(int val)
    {
        size=size+1;
        index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
            {
                return;
            }
        }
    }

    void heapdel()
    {
        if(size==0)
        {
        cout<<"Nothing to be deleted \n";
        return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size)
        {
            int left=2*i;
            int right=2*i+1;
            if(left<size && arr[i]<arr[left])
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(right<size && arr[i]<arr[right])
            {
                swap(arr[i],arr[right]);
                i=right;
            }
            else
            {
                return;
            }

        }
    }

    void show()
     {
      for(int i=1;i<=size;++i)
      {
          cout<<arr[i]<<" ";
      }
      cout<<"\n";
     }


};

int main()
{
    heaps h;
    h.heapadd(50);
    h.heapadd(60);
    h.heapadd(70);
    h.heapadd(80);
    h.heapadd(90);
    h.show();
    h.heapdel();
    h.show();
}
