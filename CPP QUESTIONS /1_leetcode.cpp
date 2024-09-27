/////////////////////////////////////////////////////////////////////////

                    // Two Sum



#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> twosum(vector<int> nums, int target ){
    unordered_map <int,int> Hashmap;///////////////////////////////doubt//////////////////////////////////////
    for(int i = 0 ; i<= nums.size();i++){
    int needed_nums  = target - nums[i];
    if(Hashmap.find(needed_nums) !=Hashmap.end() ){
    return {Hashmap[needed_nums],i};
    }
    Hashmap[nums[i]] =i;///////////////////////////////////////doubt//////////////////////////////////////////
}
   return {};
}
   int main(){
   vector<int> nums ={2,7,11,15};
   int target = 13;
   vector<int> result=twosum(nums,target);
   if(!result.empty()){
   cout <<"the indices first is "<<result[0]<<"second is "<<result[1];
   }
   else{
   cout << "fail to found the two sum num ";
   }
   return  0 ;
}