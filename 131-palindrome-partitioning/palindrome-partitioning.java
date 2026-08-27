class Solution {

    public void getPartition(String s, List<String> par, List<List<String>> ans) {

        // Base case
        if (s.length() == 0) {
            ans.add(new ArrayList<>(par));
            return;
        }

        for (int i = 0; i < s.length(); i++) {

            // Take substring from 0 to i
            String part = s.substring(0, i + 1);

            // Check whether part is palindrome
            String reverse = new StringBuilder(part).reverse().toString();

            if (part.equals(reverse)) {

                par.add(part);

                // Remaining string
                getPartition(s.substring(i + 1), par, ans);

                // Backtracking
                par.remove(par.size() - 1);
            }
        }
    }

    public List<List<String>> partition(String s) {

        List<String> par = new ArrayList<>();
        List<List<String>> ans = new ArrayList<>();

        getPartition(s, par, ans);

        return ans;
    }
}