#include <bits/stdc++.h>
using namespace std;

struct student_t{
    int id;
    int height;
    bool operator<(const student_t& another)const{
        return height < another.height;
    }
};

int main(void){
    int n;
    cin >> n;
    list<student_t> data;
    for (size_t i = 0; i < n; i++)
    {
        student_t tmp;
        tmp.id = i+1;
        cin >> tmp.height;
        data.push_back(tmp);
    }
    data.sort();
    for (size_t i = 0; i < n; i++)
    {
        cout << data.back().id << endl;
        data.pop_back();
    }
    return 0;
}