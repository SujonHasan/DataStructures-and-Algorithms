
#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
#define lc (n << 1)
#define rc (n << 1) + 1
const int N = 1e5 + 9;
int a[N];
bool t[N*4];

void Inverse(int n, int b, int e, int i, int j){

    if(b == i && e == j){

        t[n] = !t[n];
        return;
    }

    int mid = (b + e) / 2;

    if(j <= mid){
        Inverse(lc, b, mid, i ,j);
    }else if(i > mid){

        Inverse(rc, mid + 1, e, i , j);
    }
    else{

        Inverse(lc, b, mid, i , mid);
        Inverse(rc, mid + 1, e, mid + 1, j);
    }
}

int query(int n, int b, int e, int i){

    if(i == b && e == i)
    {
        return t[n];
    }

    if(t[n])
    {
        t[lc] = !t[lc];
        t[rc] = !t[rc];
        t[n] = 0;
    }

    int mid = (b + e) / 2;

    if(i <= mid)
    {
       return query(lc, b, mid, i);
    }else{

        return query(rc, mid + 1, e, i);
    }


}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;

        string s;
        cin >> s;

        int Size = s.size();

        for (int i = 0; i < Size; i++)
        {
            if(s[i] == '1')
            {
                Inverse(1, 1, Size, i +1, i+1);
            }
        }

        int q, x, y;

        cin >> q;

        for (int i = 0; i < q; i++)
        {
            char ch;
            cin>>ch;

            if(ch == 'I'){
                
                cin>> x;
                cin >> y;
                Inverse(1, 1, Size, x, y);
            }
            else if(ch == 'Q'){

                cin>> x;
                cout << query(1, 1, Size, x) << endl;
            }
        }
        
        
    }
    

    return 0;
 
}