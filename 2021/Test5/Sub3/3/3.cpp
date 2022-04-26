#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

int main(){
   int maxcurent=INT_MIN,n,i;
   
   fin>>n;

   while(n!=0){
       fin>>i;
       if(i > maxcurent) maxcurent=i;
       cout<<maxcurent<<' ';
       n--;
   }

   return 0;
}