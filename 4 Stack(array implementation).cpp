//ARRAY IMPLEMENTATION OF STACK


#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAX_SIZE 101
#define f(i,n) for(int i=0;i<=n;i++)
int A[MAX_SIZE];
int top = -1;
void Push(int x){
    if(top == MAX_SIZE - 1){
        cout<<"Error: StackOverflow\n";
        return;
    }
    A[++top] = x;
}
void Pop(){
    if(top == -1){
        cout<<"ERROR: NO ELEMENT TO POP\n";
        return;
    }
    top--;
}
void Print(){
    cout<<"stack: ";
    f(i,top)cout<<A[i]<<" ";
    cout<<endl;
}
int main(){
    Push(2);Print();
    Push(5);Print();
    Push(10);Print();
    Pop();Print();
    Push(12);Print();
    return 0;
}  


// Question - solution
/*
//___________________BALANCED_PARENTHESIS______________________//
#include <iostream>
#include <stack>
#include<map>
#include <algorithm>
#include <string>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    stack<char> S;
    map<char,char>B;
    B[')']='(';
    B['}']='{';
    B[']']='[';
    string r="";
    f(i,n){
        if(s[i]=='(' || s[i] == '{' || s[i] == '[')S.push(s[i]);
        else if(s[i]==')' || s[i] == '}' || s[i] == ']'){
            if(S.empty() || B[s[i]] != S.top()){
                r="false";
                break;
            }
            else S.pop();
        }
    }
    if(S.empty()==true && r=="")cout<<"True";
    else if(S.empty()==false || r=="false") cout<<"False";
    return 0;
} */
