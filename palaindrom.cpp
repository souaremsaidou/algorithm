#include<iostream> // cout
#include<string>  // string
#include<algorithm> // std::sort


int main()
{
    std::string a("abdc"),b("bacd");
    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    std::cout<<"They are "<<((a==b)?"":"not")<<" anagrams.";
}
