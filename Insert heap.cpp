#include<iostream>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void inserrt(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return ;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    heap h;
    h.inserrt(50);
    h.inserrt(55);
    h.inserrt(53);
    h.inserrt(52);
    h.inserrt(54);
    h.print();
}
