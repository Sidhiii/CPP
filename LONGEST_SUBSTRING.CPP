#include<iostream>
#include<map>
using namespace std;
int main()
{
	string word;
	cin>>word;
	int n = word.length();
	int start = 0,end=0,result = 0;
	map<char,int> charFreq; // character and it's number of occurence within the substring 
	while(end<n)
	{
		char ch1 = word[end];
		charFreq[ch1]++;
		while(charFreq[ch1]>1)
		{
			// reset the count for character at start 
			char ch2 = word[start];
			charFreq[ch2]--; // the reset 
			start++;
		}
		result = max(result,end-start+1);
		end++;
	}
	cout<<result;
}