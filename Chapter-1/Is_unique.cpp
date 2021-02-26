/*
1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?
Hints: #44, #7 7 7, #732
*/

/*
Idea:
O(n^2) time and O(1) memory
just take a char and traverse through the array to find all other occurrences of that char and mark them with hash.
if no other occurrence found then count the char as unique.

O(128 * n) time no extra memory
we have 128 chars in total. So for each char traverse through the array and count the number of occurrences and if number of
occurrence is equal to 1 count that char as unique char

O(nlog(n)) time and no extra memory
sort the string array in nlog(n) time and then traverse through the array and for each position check how far you have the same
char. if you cannot make a move then carry forward after counting that char on that position as unique.
This is the best time complexity in my sence

*/


#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int arr[10001];

int is_Unique(int n){
    int unique_cnt = 0, cnt;

    sort(arr, arr+n)

    for(int i=0; i<n; i++){
        cnt = 1;
        while(i+1<n && arr[i+1]==arr[i])cnt++;
        if(cnt == 1)unique_cnt++;
    }

    return unique_cnt;
}

int main(){
    int n;
    cin>> n;
    for(int i=0;i<n;i++)cin>> arr[i];
    cout << is_Unique(n) << endl;
}
