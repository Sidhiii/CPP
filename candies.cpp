/*Our Monk loves candy!
While taking a stroll in the park, he stumbled upon N Bags with candies. The i'th of these bags contains Ai candies.
He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies! ,where [x] is the greatest integer less than x (Greatest Integer Function).
Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it.
Find the maximum number of candies that Monk can consume.

Input:
First line contains an integer T. T test cases follow.
First line of each test case contains two space-separated integers N and K.
Second line of each test case contains N space-separated integers,the number of candies in the bags.

Output:
Print the answer to each test case in a new line. */

#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t; //no. of test cases
    int n; //no. of candies
    cin>>n;
    int k; //no. of bags
    cin>>k;
    multiset<long long> bags; //we use multiset so that duplicate values can be inserted
    for(int i=0;i<n;i++) //inserting no. of candies
    {
        int candy_ct;
        cin>>candy_ct;
        bags.insert(candy_ct); //no. of candies are inserted
    } 
    int total =0; //let total no. of bags be 0
    for(int i=0;i<k;i++)
    {
        auto last = --bags.end(); //assigning last to the end value of set
        int candy_ct = *last;
        total = total + candy_ct; // making total = candy count after everytime a bag is eaten
        bags.erase(last);
        bags.insert(candy_ct/2);
    }
    cout<<total;
}