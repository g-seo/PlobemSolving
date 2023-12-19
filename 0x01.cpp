#include <bits/stdc++.h>
using namespace std;

int func1(int N){
  int sum = 0;  
  for (int i = 1; i <= N; i++) {
      if ((i % 3 == 0) || (i % 5 == 0)) sum += i;
  }
  return sum;
}
// O(N) 이 아닌 O(1)로 구하는 방식이 존재


int func2(int arr[], int N){
  for (int i = 0; i != (N - 1); ++i) {
      for (int j = (i + 1); j != N; ++j) {
          if ((arr[i] + arr[j]) == 100) return 1;
      }
  }
  return 0;
}
// O(N^2) 가 아닌 O(N)으로 구하는 방식이 존재
// 배열의 특징 활용(인덱스 확인 시 O(1)이 사용됨)
/*
int func2(int arr[], int N){
  int occur[101] = {};
  for(int i = 0; i < N; i++){
    if(occur[100-arr[i]] == 1)
      return 1;
    occur[arr[i]] = 1;
  }
  return 0;
} */


//처음 시도 못했음
int func3(int N){
  for (int i = 1; i * i <= N; i++) {
      if (i * i == N) return 1;
  }
  return 0;
}
// There is way to retun O(lg N) not O(N^1/2)


// 틀림
int func4(int N){
    int answer = 0;
    for (int i = 1; i * i <= N; i++) {
        int result = i * i;
        if (result <= N && (result % 2 == 0)) {
            answer = result;
        }
    }
    if (answer > 0) return answer;
    else return -1;
}
/* 정답
int func4(int N){
  int val = 1;
  while(2*val <= N) val *= 2;
  return val;
}
*/

void test1(){
  cout << "****** func1 test ******\n";
  int n[3] = {16, 34567, 27639};
  int ans[3] = {60, 278812814, 178254968};
  for(int i = 0; i < 3; i++){
    int result = func1(n[i]);
    cout << "TC #" << i << '\n';
    cout << "expected : " << ans[i] << " result : " << result;
    if(ans[i] == result) cout << " ... Correct!\n";
    else cout << " ... Wrong!\n";
  }
  cout << "*************************\n\n";
}

void test2(){
  cout << "****** func2 test ******\n";
  int arr[3][4] = {{1,52,48}, {50,42}, {4,13,63,87}};
  int n[3] = {3, 2, 4};
  int ans[3] = {1, 0, 1};
  for(int i = 0; i < 3; i++){
    int result = func2(arr[i], n[i]);
    cout << "TC #" << i << '\n';
    cout << "expected : " << ans[i] << " result : " << result;
    if(ans[i] == result) cout << " ... Correct!\n";
    else cout << " ... Wrong!\n";
  }
  cout << "*************************\n\n";
}

void test3(){
  cout << "****** func3 test ******\n";
  int n[3] = {9, 693953651, 756580036};
  int ans[3] = {1, 0, 1};
  for(int i = 0; i < 3; i++){
    int result = func3(n[i]);
    cout << "TC #" << i << '\n';
    cout << "expected : " << ans[i] << " result : " << result;
    if(ans[i] == result) cout << " ... Correct!\n";
    else cout << " ... Wrong!\n";
  }
  cout << "*************************\n\n";
}

void test4(){
  cout << "****** func4 test ******\n";
  int n[3] = {5, 97615282, 1024};
  int ans[3] = {4, 67108864, 1024};
  for(int i = 0; i < 3; i++){
    int result = func4(n[i]);
    cout << "TC #" << i << '\n';
    cout << "expected : " << ans[i] << " result : " << result;
    if(ans[i] == result) cout << " ... Correct!\n";
    else cout << " ... Wrong!\n";
  }
  cout << "*************************\n\n";
}

int main(void){
  test1();
  test2();
  test3();
  test4();
}
