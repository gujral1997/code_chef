#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int count=0;
  string str;
  cin>>str;
  if (str.find("Danil") != std::string::npos){
      count++;
  }
  if (str.find("Olya") != std::string::npos){
      count++;
  }
  if (str.find("Slava") !=string::npos){
      count++;
  }
  if (str.find("Ann") != std::string::npos){
      count++;
  }
  if (str.find("Nikita") != std::string::npos){
      count++;
  }
  if(count==1)
  {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}
