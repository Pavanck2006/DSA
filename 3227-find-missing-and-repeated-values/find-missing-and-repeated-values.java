class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        HashSet<Integer> set = new HashSet<>();
        int repeted = 0;
        int missing = 0;
        for(int i=0;i<grid.length;i++)
        {
            for(int j=0;j<grid.length;j++)
            {
                int num = grid[i][j];
                if(set.contains(num))
                {
                    repeted = num;
                }
                 set.add(grid[i][j]);
            }
           
        }
        for(int num = 1; num<=grid.length*grid.length;num++)
        {
            if(!set.contains(num))
            {
            missing = num;
            break;
            }

        }
        return new int[]{repeted,missing};
    }
}