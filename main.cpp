#include <iostream>
#include <vector>


using namespace std;
void MulArray(int* arr, int num, int size);
void Range(int *arr, int min, int max, int step);
vector<int> Range1(int start, int max, int step);
//func


int main() {
    //Each element of the array is multiplied by a number

  int array[] = {1, 2, 3, 4, 5};

  MulArray(array, 3, 5);

   // for(int i = 0; i<= 5; i++){
      //  cout << array[i] << "\n";
  //  }


  //method 2
    //as the method of Range1 return a vector
    vector<int> newVector =  Range1(2, 20 ,2);
    for(auto y: newVector) cout << y << endl;

  return 0;

}

void MulArray(int* arr, int num, int size){

    for(int i = 0; i <= size ; i++){
        arr[i] =  arr[i] * num;
    }
}

// *************dump method refer to array *******************//

void Range(int *arr, int min, int max, int step){

    for(int i = 1; i <= 5; i++){


        arr[0] = min;
        arr[i] = arr[i - 1] * step;
        arr[i + 1] = arr[i - 1];
        if (arr[i] > max){

            arr[i] = 33;  }
        }

    }

// Advanced method -> vector
//want to return a vector!
  vector<int> Range1(int start, int max, int step){


     int element = start;

     //new a vector
     vector<int> vector1;

     while(element <= max){

      vector1.push_back(element);
      element *= step;

     }

    return vector1;

}