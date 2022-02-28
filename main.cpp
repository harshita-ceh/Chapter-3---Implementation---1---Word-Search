#include <iostream>
using namespace std;
const int M=3;
const int N = 4;

int main() {
  char arr[M][N];
  char word[10];
  cout<<"How many words do you want"<<endl;
  for (int i =0;i<M;i++){
    for (int j =0;i<N;i++){
      cin>>arr[i][j];
    }
  }
  cout<<"Enter the word to search: "<<endl;
  for(int i =0; i < 3;i++){
    cin>>word[i];
  }
  
} 