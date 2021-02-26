/*
Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other.
Hints: #7, #84, #722, #737
*/

/*
Solution idea
O(n^2) time & no extra  space
if size of 2 strings aren't same return false
for each char of the first string traverse through the second string and replace the first occurrence with some predefined char. if for any
char no occurrence found in 2nd string then return false.
otherwise true

O(nlog max(n)) time & no extra space
if size of 2 string isn't same return false
sort both string in nlog(n) time.
then do string compare in n time and if they matches return true otherwise false

O(n)time and memory O(number of unique chars in general)
count frequency of each string in 2 separate hashmap and then check if the frequency for each char is same in both hashmap/array.
this frequency checking part can be done in 2 ways
1. for 128 chars check if the frequency is same in both hashmap
2. traverse through the first string and check for each char in position hashmap frequency of both array is the same
3. traverse through one hashmap and check if the frequency matches on the other hashmap

*/
#include<iostream>
#include<unordered_map>

using namespace std;

int arr1[128], arr2[128];

bool check_Permutation(string str1, string str2){
    int sz1 = str1.size(), sz2 = str2.size();
    if(sz1 != sz2)return false;

    for(int i=0; str1[i]; i++)arr1[str1[i]]++;
    for(int i=0; str2[i]; i++)arr2[str2[i]]++; 

    for(i=0; str1[i]; i++){
        if(arr1[str1[i]] != arr2[str2[i]])return false;
    }   
    return true;
}

int main(){
    int str1, str2;
    cin >> str1 >> str2;
    cout << check_Permututation(str1, str2);
}
