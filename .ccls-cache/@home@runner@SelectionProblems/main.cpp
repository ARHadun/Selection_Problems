#include <iostream>
using namespace std;

int main() {
  int x, start, end;

  cin>>x;

  int cnt = 0;
  cin>>start>>end;
  cnt+= (start <=x && x<= end);

  cin>>start>>end;
  cnt += (start && x<=end);

  cin>>start>>end;
  cnt += (start <= x && x<=end);

  cout<<cnt<<endl;

  return 0;
}