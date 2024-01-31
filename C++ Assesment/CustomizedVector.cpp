#include<bits/stdc++.h>
using namespace std;

class A{
    int x;
    public:
    void setX(int xArg){
        x=xArg;
    }
    int getX(){
        return x;
    }
    ~A(){
        cout<<"A is destructed"<<endl;
    }
};

template <typename T>
class DynamicArray {
    private:
        T* arr; 
        int capacity; 
        int size; 
    public:
        DynamicArray(int cap) {
            arr = new T[cap]; 
            capacity = cap; 
            size = 0;
        }
        void add(int index, T value) {
            if (index < 0 || index > size) { 
                cout << "Invalid index" << endl;
                return;
            }
            if (size == capacity) { 
                T* newArr = new T[capacity * 2];
                for (int i = 0; i < size; i++) {
                    newArr[i] = arr[i];
                }
                delete[] arr;
                arr = newArr;
                capacity = capacity * 2;
            }
            for (int i = size; i > index; i--) {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
           
            size++;
        }
        T get(int index) const {
            if (index < 0 || index >= size) { 
                cout << "Invalid index" << endl;
                return T(); 
            }
            return arr[index];
        }
        void clear() {
            delete[] arr;
            arr = nullptr;
            capacity = 0;
            size = 0;
        }
        int getSize() const {
            return size;
        }
        
        bool operator<( const DynamicArray &arr) const 
    	{ 
    		return capacity < arr.getSize();
    	}
    	T& operator[] (int index) const {
            if (index < 0 || index >= size) { 
                cout << "Invalid index" << endl;
                return arr[0]; 
            }
            return arr[index];
        }
        friend ostream& operator<<( ostream& out, DynamicArray& arr){
            int size=arr.getSize();
    		for(int i=0;i<size;i++){
    		    cout<<arr[i]<<" ";
    		}
    		return out;
    	}
};

int main(){
    DynamicArray<string> numbers(3),newNumber(5);
    
    numbers.add(0, "zero");
    numbers.add(1, "one"); 
    numbers.add(2, "two"); 
    numbers.add(3, "three"); 
    if(newNumber<numbers){
        cout<<"true"<<endl;
    }
    cout<<numbers[3]<<endl;
    cout<<numbers<<endl;
    numbers.clear(); 
    A* a = new A();
    DynamicArray<A*> aArray(3);
    aArray.add(0,a);
    //delete aArray;
    return 0;
}
