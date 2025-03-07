#include<iostream>

using namespace std;

class Vec{
  public:
    int size;
    int capacity;
    int *arr;

   
    Vec(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i = 0; i < size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }
    void print(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int get(int idx){
        if(size == 0){
            cout<<"Array is empty";
            return -1;
        }
        if(idx >= size){
            cout<<"Invalid Index"<<endl;
        }
        return arr[idx];
    }

    void remove(){
        if(size == 0){
            cout<<"Array is Empty";
        }
    }

};

int main(){
    Vec v1;
    v1.add(10);
    v1.print();
    v1.add(4);
    v1.print();
    v1.add(9);
    v1.print();

}