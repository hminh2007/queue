#include <bits/stdc++.h>
using namespace std;

struct Q 
{
    int a[1000];
    int f = 0, r = 0, c = 0;
    bool e() { return c == 0; }
    bool full() { return c == 1000; }
    void push(int x) 
    {
        a[r] = x;
        r = (r + 1) % 1000;
        c++;
    }
    int pop() 
    {
        int x = a[f];
        f = (f + 1) % 1000;
        c--;
        return x;
    }
    int front() { return a[f]; }
};

int main() 
{
    Q q;
    for (int i = 1; i <= 5; i++) q.push(i);
    while (!q.e()) cout << q.pop() << ' ';
    cout << '\n';

    deque<int> d;
    d.push_back(1);
    d.push_front(0);
    d.push_back(2);
    while (!d.empty()) 
    {
        cout << d.front() << ' ';
        d.pop_front();
    }
    cout << '\n';

    priority_queue<int, vector<int>, greater<int>> p;
    p.push(5);
    p.push(1);
    p.push(3);
    while (!p.empty()) 
    {
        cout << p.top() << ' ';
        p.pop();
    }
    cout << '\n';
    return 0;
}
