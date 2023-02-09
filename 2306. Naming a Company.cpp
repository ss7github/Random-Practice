Group strings from ideas into different sets by their initials.
For example:

set c = {"offee", "hord", "ome", ...}
set b = {"offee", "ee", "uffalo", ...}

For two words A = a + suffix_a, B = b + suffix_b with different initials a, b, if the suffix of A (suffix_a) appears in both sets, they can't form a valid name. Thus we just need to find out the number of unique suffix from set A and set B .

"offee" appears in both sets thus it can't form a valid name.
"hord", "ome", "ee" and "uffalo" are unique suffixes.
""hord" with "ee", "hord" with "uffalo", "ome" with "ee", "ome" with "uffalo", thus we can make a total of 2 * 2 valid names. Consider we can change the order to double the valid words, multiply the answer by 2.

----------------------------

  class Solution:
    def distinctNames(self, ideas: List[str]) -> int:
        # grouping strings by their initials
        S = [set() for _ in range(26)]
        for idea in ideas:
            S[ord(idea[0]) - ord('a')].add(idea[1:])
        
        # number of distinct valid names for company = ans
        ans = 0

        # calculating number of valid names from every initial pair
        for i in range(25):
            for j in range(i + 1, 26):
                # number of duplicated suffixes
                d = len(S[i] & S[j])
                ans += 2 * (len(S[i]) - d) * (len(S[j]) - d)

        return ans
