import java.util.Arrays;

public class ValidAnagram {
    public static boolean isAnagram(String s, String t) {
        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Convert strings to character arrays
        char[] sArray = s.toCharArray();
        char[] tArray = t.toCharArray();

        // Sort the character arrays
        Arrays.sort(sArray);
        Arrays.sort(tArray);

        // Compare the sorted arrays
        return Arrays.equals(sArray, tArray);
    }

    // Test the function
    public static void main(String[] args) {
        String s = "anagram";
        String t = "nagaram";

        if (isAnagram(s, t)) {
            System.out.println(s + " and " + t + " are anagrams.");
        } else {
            System.out.println(s + " and " + t + " are not anagrams.");
        }
    }
}
