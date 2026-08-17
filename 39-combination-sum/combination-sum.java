class Solution {
    Set<List<Integer>> set = new HashSet<>();
    void comsum(int[] arr,int target, int index, List<List<Integer>> ans, List<Integer>combin){
        if(index==arr.length || target<0)
        return;
        if(target == 0)
        {
          if (!set.contains(combin))
          {
            ans.add(new ArrayList<>(combin));
            set.add(new ArrayList<>(combin));
          }
        return;
        }

        combin.add(arr[index]);
        comsum(arr,target-arr[index],index+1,ans,combin);
        comsum(arr,target-arr[index],index,ans,combin);
        combin.remove(combin.size()-1);
        comsum(arr,target,index+1,ans,combin);
        
    }
    public List<List<Integer>> combinationSum(int[] arr, int target) {
        List<List<Integer>>ans = new ArrayList<>();
        List<Integer>combin = new ArrayList<>();
        comsum(arr,target,0,ans,combin);
        return ans;
    }
}