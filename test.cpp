#include<bits/stdc++.h>
using namespace std;
class G13
{
    static map<int,string>mp;
    int rno;
    string name;
    public:
    G13(int rno, string name)
    {
        this->rno=rno;
        this->name=name;
        mp[rno]=name;
    }
    void ele()
    {
        for(auto i:mp)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
};
map<int,string>G13::mp;
int main()
{
    G13 obj3(3,"Tanishka");
    G13 obj1(1,"Thirza");
    G13 obj2(2,"Sunaina");
    G13 obj4(-16,"Rastogi");
    G13 obj5(5,"Mittal");
    obj5.ele();
    return 0;
}