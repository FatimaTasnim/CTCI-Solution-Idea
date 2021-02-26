
/*
Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other.
Hints: #7, #84, #722, #737
*/

/*
Solution idea
O(n^2)
if size of 2 string isn't same return flase
for each char of the first string traverse through the second string and replace the first occurrence with some predefined char. if for any
char no occurrence found in 2nd string then return false.
otherwise true

O(nlog max(n))
if size of 2 string isn't same return false
sort both string in nlog(n) time.
then do string compare in n time and if they matches return true otherwise false


*/
