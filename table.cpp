#include <iostream>
using namespace std;
int main() {
  int a;
  int i = 0;
  int d  = 0;
cout<<"This Program Show You Table Of Any Number";
  cout<<"\nEnter Your Number: ";
  cin>>a;
  do {
    cout<<a<<" x "<<d<<" = "<<a*i<<endl;
    i++;
    d++;
  }while(i <= 10 && d <= 10);
return 0;
}
