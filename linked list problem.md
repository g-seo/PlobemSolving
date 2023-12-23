```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> L;
    list<int>::iterator t = L.begin();
    L.push_back(5);
    cout << *t;
}
```
1 출력 (왜 1이 나오는 것이지)
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> L;
    L.push_back(5);
    list<int>::iterator t = L.begin();
    cout << *t;
}
```
5출력  
둘이 값이 다르게 나옴.
