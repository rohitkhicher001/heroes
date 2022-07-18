#include <bits/stdc++.h>
using namespace std;

void countCalc(int &count,vector<Characters> &characters_array)
{
    for(int i=3;i<999;i+=2)
    {
        if(count == i)
        {
            for(auto i: characters_array)
            {
                i.level++;
            }
        }
    }

}
