#include<bits/stdc++.h>
using namespace std;


class DynamicIntegerArray {
    private:
        int* arr; 
        int capacity; 
        int size; 
    public:
       
        DynamicIntegerArray(int cap) {
            arr = new int[cap]; 
            capacity = cap; 
            size = 0;
        }

        void add(int index, int value) {
            if (index < 0 || index > size) { 
                cout << "Invalid index" << endl;
                return;
            }
            if (size == capacity) { 
                int* newArr = new int[capacity * 2];
                
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

        
        int get(int index) const {
            if (index < 0 || index >= size) { 
                cout << "Invalid index" << endl;
                return -1; 
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
        
        bool operator<( const DynamicIntegerArray &arr) const 
    	{ 
    		return capacity < arr.getSize();
    	}
    	int& operator[] (int index) const {
            if (index < 0 || index >= size) { 
                cout << "Invalid index" << endl;
                return arr[0]; 
            }
            return arr[index];
            
        }
        
        friend ostream& operator<<(ostream& out, const DynamicIntegerArray& arr) {
            
            int size=arr.getSize();
    		for(int i=0;i<size;i++){
    		    cout<<arr[i]<<" ";
    		}
    		return out;

    	}

};

int main() {
    DynamicIntegerArray numbers(3),newNumber(5); 
    numbers.add(0, 10);
    numbers.add(1, 20); 
    numbers.add(2, 30); 
    numbers.add(3, 40); 
    if(newNumber<numbers){
        cout<<"true"<<endl;
    }
    cout<<numbers[3]<<endl;
    cout<<numbers<<endl;
    numbers.clear(); 
    return 0;
}
