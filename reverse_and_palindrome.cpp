#include <iostream>
#include <string.h>
using namespace std;

 void reverse_with_ptr (char* str, int len) {
    char* p1 = str;
    char* p2 = str + len - 1;
    char temp;
    
    while (p1<p2) {
        temp = *p1;
        *p1++ = *p2;
        *p2-- = temp;
    }
    return;
    
}

void is_palindrome(string str, int len) {
    int low = 0;
    int high = len - 1;
    
    while(low!=high)  {
        if(str[low++] != str[high--]) {
            cout << "String is not a palindrome!"<< endl;
            return;
        }
    }
    cout << "String is a palindrome!"<< endl;
    return;
    
}

int main()
{
   cout << "Hello World" << endl; 
   int len=0;
   string s;
   
   cout << "Enter a string to be reversed:" << endl;
   cin >> s;
   //s = "popopq";
   char* s_ptr = &s[0];
   len = s.length();
   
   cout << "Length of string:" << len << endl;
   
   reverse_with_ptr(s_ptr,len);
   
   cout << s << endl;
   
   is_palindrome(s, len);
   return 0;
}