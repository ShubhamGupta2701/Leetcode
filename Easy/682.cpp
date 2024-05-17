// 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& oprations) {
        vector<int>v;
        for(int i=0;i<oprations.size();i++){
            int sz=v.size();
            if(oprations[i]!="D" && oprations[i]!="C" && oprations[i]!="+"){
                v.emplace_back(stoi(oprations[i]));
            }
            if(oprations[i]=="+"){
                v.emplace_back(v[sz-1]+v[sz-2]);
            }
            if(oprations[i]=="D"){
                v.emplace_back(2*v[sz-1]);
            }
            if(oprations[i]=="C"){
                v.pop_back();
            }
        }
        long long ans=accumulate(v.begin(),v.end(),0);
        return ans;
        
    }
};