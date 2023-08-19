#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int>& st, int x)
{
 
    if (st.size() == 0) {
        st.push(x);
    }
    else {
 
        int a = st.top();
        st.pop();
        insert_at_bottom(st, x);

        st.push(a);
    }
}
 

void reverse(stack<int>& st)
{
    if (st.size() > 0) {
 
        int x = st.top();
        st.pop();
        reverse(st);

        insert_at_bottom(st, x);
    }
    return;
}

int main() {
    int N;
    cin >> N;

    stack<int> st, st2;
    for (int i = 1; i <= N; i++) {
        int num;
        cin >> num;
        st.push(num);
    }

    st2 = st;
 
    while (!st2.empty()) {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout<<endl;

    return 0;
}
