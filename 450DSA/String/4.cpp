// Write a Code to check whether one string is a rotation of anotherw
// Approach : if length of both strings is different then not rotations
//            Make the string1 to concatenate to twice it's content if string 2 is found in two repeatitions of string1 then string2 is a rotation of string1 else not   
// Alternates : https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

#include <bits/stdc++.h>
using namespace std;

void solve();
bool areRotations(string,string);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}

void solve()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    cout << areRotations(s1,s2);
}

/*  Same Approach different code . 

bool areRotations(string str1, string str2) 
{ 
   
   if (str1.length() != str2.length()) 
        return false; 
  
   string temp = str1 + str1;  
  return (temp.find(str2) != string::npos); 
} 
  
*/

bool areRotations(string s1,string s2)
{
    if (s1.length() != s2.length())         
        return 0; 
    s1+=s1;         
    int k,j;        
    int l=s2.length();
    
    for(int i=0;s1[i+l-1];i++){         // Accessing every chunk of chars of length of string2
        k=i;    
        for(j=0;j<=l-1;j++){            // Accessing each character and comparing if match found of string2 in string1
            if(s1[k]!=s2[j])
                break;                  // If not found break and look for next length of chars
            k++;
        }
        if(j==l)                        // IF iterator reaches to length of string2 then 
            return 1;
    }
    return 0;
}

