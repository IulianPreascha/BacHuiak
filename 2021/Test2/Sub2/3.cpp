#include <bits/stdc++.h>
using namespace std;

char s[21], voc[]="aeiouAEIOU";
int sem;  

int main() {

cin.getline(s,21);

for(int i=0;i<strlen(voc);i++)
    if(strchr(s, voc[i])==0)
        cout<<voc[i];

// for(int i=0;i<strlen(voc);i++){  
//     sem=0;  
//     for(int j=0;j<strlen(s);j++)  
//         if(s[j]==voc[i])  
//             sem=1;  
//     if(sem==0)  
//         cout<<voc[i];  
//     }

return 0;
}