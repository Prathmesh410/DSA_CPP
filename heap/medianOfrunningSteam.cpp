#include "bits/stdc++.h"

using namespace std;

priority_queue<int, vector<int>, greater<int>> pqm;
priority_queue<int, vector<int>> pq;

// void insert(int x)
// {
//     if (pq.size() == pqm.size())
//     {
//         if (pq.size() == 0)
//         {
//             pq.push(x);
//             return;
//         }
//         if (x < pq.top())
//         {
//             pq.push(x);
//         }
//         else
//         {
//             pqm.push(x);
//         }
//     }
//     else
//     {
//         if (pq.size() > pqm.size())
//         {
//             if (x >= pq.top())
//             {
//                 pqm.push(x);
//             }
//             else
//             {
//                 int temp = pq.top();
//                 pq.pop();
//                 pq.push(x);
//                 pqm.push(temp);
//             }
//         }

//         else
//         {
//             if (x <= pqm.top())
//             {
//                 pq.push(x);
//             }
//             else
//             {
//                 int temp = pqm.top();
//                 pqm.pop();
//                 pq.push(temp);
//                 pqm.push(x);
//             }
//         }
//     }
// }


void inser(int x) {
    if(pq.size() == pqm.size()){
        if(pq.empty()){
            pq.push(x);
            return;
        }
        if(x <= pq.top()){
            pq.push(x);

        }
        else{
            pqm.push(x);
        }
    }
    else{
        if(pq.size() > pqm.size()){
            if(x >=pq.top()){
                pqm.push(x);
            }
            else{
                int temp = pq.top();
                pq.pop();
                pq.push(x);
                pqm.push(temp);
            }
        }
        else{
            if(x <= pqm.top()){
                pq.push(x);
            }
            else{
                int temp = pqm.top();
                pq.pop();
                pq.push(temp);
                pqm.push(x);
            }
        }
    }
}



double calulate()
{
    if (pq.size() == pqm.size())
    {
        return (pq.top() + pqm.top()) / 2.0;
    }
    if (pq.size() > pqm.size())
    {
        return pq.top();
    }
    else
    {
        return pqm.top();
    }
}

int main()
{
    inser(3);
    cout<<calulate()<<endl;
    inser(4);
    cout<<calulate()<<endl;
    inser(5);
    cout<<calulate()<<endl;
   

}





