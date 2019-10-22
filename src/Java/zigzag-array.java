// this is solution for leetcode problem nu. 6, zigzag-array in java8.

class Solution {
    public String convert(String s, int n) {
        Map<Integer, StringBuilder> map = new HashMap<>();

        int pos = 0;
        boolean goDown = true;

        // default goDown is true, so pos++ is done and pos=1 now.
        // so run pos from 1 to n, no of rows.

        for (char c : s.toCharArray()) {

            if (pos == n)
                goDown = false;

            if (pos == 1)
                goDown = true;

            if (goDown)
                pos++;
            else
                pos--;

            if (!map.containsKey(pos)) {
                // then add that key, because you are visiting first time

                map.put(pos, new StringBuilder());

            }
            // now append current character to string at current position
            map.get(pos).append(c);

        } // endof for-loop

        StringBuilder result = new StringBuilder();

        for (int i : map.keySet()) {
            result.append(map.get(i));
        }

        return result.toString();
    }
}
