# include <iostream>
# include <string>
# include <stack>
using namespace std;

int main() {
    int a;
    cin >> a;
    stack <int> s;
    for(int i = 0; i < a; i++){
        string str;
        cin >> str; // push 1
        if(str == "push"){
            int number;
            cin >> number;
            s.push(number);
        }
        if(str == "top"){
            if(s.empty()){
                cout <<-1 <<"\n";
            }else{
                cout << s.top() << "\n";
            }
        }
        if(str == "size"){
            cout << s.size()  << "\n";
        }
        if(str == "empty"){
            cout << s.empty()  << "\n";
        }
        if(str == "pop"){
            if(s.empty() == 1){
                cout << "-1"  << "\n";
            }
            else{
                cout << s.top()  << "\n";
                s.pop();
            }
        }


    }




}

