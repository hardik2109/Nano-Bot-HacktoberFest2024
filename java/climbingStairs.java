
import java.util.HashMap;

public class ClimbingStairs {
    static HashMap<Integer,Integer> memo=new HashMap<>();
    static int climbStairs(int n) {
        if(n<=1)
        {
            return 1;
        }
        if(memo.get(n)!=null)
        {
            return memo.get(n);
        }
        
        int count1=climbStairs(n-1);
        int count2=climbStairs(n-2);
        memo.put(n, count1+count2);
        return count1+count2;
    }
    public static void main(String[] args) {
        System.out.println(3);
    }
    
}
