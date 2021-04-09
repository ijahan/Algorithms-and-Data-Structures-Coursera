#include <bits/stdc++.h>

int get_change(int m) {
  //write your code here
  int arr[3] = {0,0,0};
  int w[3] = {10, 5, 1};
  for(int i=0; i<3; i++)
  {
  	if(m == 0)
  		return(arr[0] + arr[1] + arr[2]);
  	arr[i] = m / w[i];
  	m = m % w[i];
  }
  return (arr[0] + arr[1] + arr[2]);
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
  
  return 0;
}
