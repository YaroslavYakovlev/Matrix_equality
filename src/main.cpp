#include <iostream>
#include <vector>


const int n = 2;

void fillingArray(int (&arr)[n][n], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){      
      std::cin >> arr[i][j];
    }
  }
}

void print(int (&arr)[n][n], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int equalityCheck(int (&arr_1)[n][n], int (&arr_2)[n][n]){
  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(arr_1[i][j] == arr_2[i][j]){
          return true;
        }else {
          return false;
        }
      }
    }
}

int main(){
  std::cout << "Matrix_equality" << std::endl;
  int arr_1[n][n];
  int arr_2[n][n];

  std::cout << "Matrix - 1" << std::endl;
  fillingArray(arr_1, n);
  std::cout << "Matrix - 2" << std::endl;
  fillingArray(arr_2, n);
  
  std::cout << std::endl;  

  print(arr_1, n);
  std::cout << std::endl;  
  print(arr_2, n);

  if(equalityCheck(arr_1, arr_2)){
    std::cout << "Arrays are equal" << std::endl;
  }else{
    std::cout << "Arrays are not equal" << std::endl;
  }
    
  return 0;
}


// Равенство матриц

// Требуется реализовать небольшую программу 
// для сравнения двух двумерных матриц 
// размерами 4х4 на предмет их полного равенства. 
// Программа принимает на вход две целочисленные 
// матрицы A и B, которые вводятся с 
// помощью std::cin и сравнивает их на 
// предмет полного равенства. Если матрицы 
// равны, то об этом сообщается в стандартном 
// выводе. Алгоритм должен быть по возможности 
// оптимальным и не проводить лишних операций.