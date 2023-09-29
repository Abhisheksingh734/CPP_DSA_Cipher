// You are using GCC
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool compareEnvelop(vector<int> v1, vector<int> v2){
    if(v1[0] == v2[0]){
        return v1[1] > v2[1];
    }else{
        return v1[0] < v2[0];
    }
}

int numberOfEnvelop(vector<vector<int> > & envelop){
    int n = envelop.size();
    
    sort(envelop.begin(), envelop.end(), compareEnvelop);
    
    vector<int> final(n, 1);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(envelop[i][0] >envelop[j][0] && envelop[i][1] >envelop[j][1] ){
                final[i] = max(final[i], final[j]+1);
            }
        }
    }
    
    return *max_element(final.begin(), final.end());
    
}


int main(){
    
    int size;
    cin>>size;
    
    vector<vector<int> > envelop(size, vector<int>(2));
    for(int i=0; i<size; i++){
        cin>>envelop[i][0] >>envelop[i][1];
    }
    
    cout<<numberOfEnvelop(envelop);
    
    // map<int, int> mapArray;
    
    // for(int i=0; i<size; i++){
    //     int firstValue, secondValue;
        
    //     cin>>firstValue>>secondValue;
        
    //     mapArray[firstValue] = secondValue;
    // }
    
    // int count=0;
    // for(auto it1=mapArray.begin(); it1!=mapArray.end();++it1){
    //     for(auto it2=mapArray.begin(); it2!=mapArray.end();it2++){
    //         if((it1->first <it2->first) && (it1->second < it2->second) ){
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;
    
    return 0;
}

