#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <strings.h>
using namespace std;


//REVERSE 
/* void reverse(string s){

    if(s.length()==0){
    return;
}

string ros = s.substr(1);
reverse(ros);
cout<<s[0];
}
int main()
{
    reverse("Sidhi");
    return 0;
}
*/



//REPLACE
/*
void replaceX(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='x'){
        cout<<"12";
        replaceX(s.substr(1));
    }
    else{
        cout<<s[0];
        replaceX(s.substr(1));
    }
}

int main(){
    replaceX("xyx");
    return 0;
}
*/

//REMOVE DUPLICATE
/*
string replace(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans= replace(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}


int main(){

    cout<<replace("ppooppoo");
    return 0;
}
*/



//MOVE ALL X
// string move(string s){
//     if(s.length()==0){
//         return "";
//     }

//     char ch=s[0];
//    string ans=  move(s.substr(1));


//    if(ch=='x'){
//     return ans+ch;

//    }
//    return ch+ans;
// }

// int main(){

//     cout<<move("sxixdxhxix");
//     return 0;
// }




//SUBSEQUENCE

void seq(string s, string ans){

    if(s.length()==0);
}

char ch= s[0];
string ros= s.substr(1);
