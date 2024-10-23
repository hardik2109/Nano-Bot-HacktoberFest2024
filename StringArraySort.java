import java.util.Arrays;

public class StringArraySort {
    public static void main(String[] args) {

        String names = "Zara, John, Alice, Bob, Eve";

        String[] namesArray = names.split(", ");

        Arrays.sort(namesArray);

        System.out.println("Sorted array in ascending order:");
        for (String name : namesArray) {
            System.out.println(name);
        }
    }
}
