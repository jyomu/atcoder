#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    int xy[2];
    cin >> xy[0] >> xy[1];
    list<int> fList[2];//x,y
    fList[0].push_back(0);
    for (size_t i = 0,dir = 0; i < s.size(); i++)
    {
        if (s[i]=='F')fList[dir%2].back()++;
        else fList[(++dir)%2].push_back(0);
    }
    for(size_t i = 0; i < 2; i++){
        int sum=0;
        for(auto x:fList[i])sum+=x;
        if((sum-xy[i])%2!=0){
            cout << "No" <<endl;
            return 0;
        }else
        {
            int q=(sum-xy[i])/2;
            vector<int> ans_list(1,0);
            bool flag=false;
            for(auto x:fList[i]){
                for(auto l:ans_list){
                    if(x+l<=q)ans_list.push_back(x+l);
                    if(ans_list.back()==q){flag=true;break;}
                }
                if(flag)break;
            }
            if(!flag){cout<<"No"<<endl;return 0;}
        }
    }
    cout << "Yes" << endl;
    return 0;
}