#include <bits/stdc++.h>
using namespace std;

ifstream a("bac1.txt");
ifstream b("bac2.txt");


int main(){
    
   int xa,xb,ia=1,ib=1,na,nb;

   a >> na >> xa;
   b >> nb >> xb;

   while(ia <= na && ib <= nb){
       if(xa==xb){
           a >> xa;
           b >> xb;
           ia++;
           ib++;
       }
       if(xa<xb){
           if(xa%5==0) cout << xa << " ";
           a >> xa;
           ia++;
       }
       if(xb<xa){
           if(xb%5==0) cout << xb << " ";
           b >> xb;
           ib++;
       }
   }
   while(ia <= na){
       a >> xa;
       ia++;
       if(xa%5==0) cout << xa << " ";
   }
   while(ib <= nb){
       b >> xb;
       ib++;
       if(xb%5==0) cout << xb << " ";
   }

   return 0;

}

