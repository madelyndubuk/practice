#include <iostream>

using namespace std
  
int func2(int* in, int n);

int func1(int** mat, int n, int m)
{
  if(n > 0){
    mat[n-1][0] = func1(mat, n-1, m);
    return func2(mat[n-1], m);
  }
  else {
    return mat[0][0];
  }
}

int func2(int* in, int x)
{
  if(x > 0){
    int temp=0;
    for(int i=0; i<x; i++){
      temp += in[i];
    }
    return temp;
  }
  return 0;
}

int main()
{
  int r1[] = {1,2,3,4};
  int r2[] = {5,6,7,8};
  int r3[] = {9,10,11,12};
  int* mat[] = { r1, r2, r3  };
  func1(mat, 3, 4);
  for(int i=0; i < 3; i++){
    for(int j= 0; j < 4; j++){
      cout << setw(2) << mat[i][j]  << " ";
    }
    cout << endl;
  }
}
