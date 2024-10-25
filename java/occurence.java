import java.util.*;
public class strng {
    Scanner sc=new Scanner(System.in);
    public static void count(int []array){
        Arrays.sort(array);
        for(int i=0;i<array.length;i++){
            int count=1;
            if(i!=array.length-1){
                for(int j=i+1;j<array.length;j++){
                    if(array[i]==array[j])
                    count++;
                    else 
                    break;
            }
        }
            System.out.println(array[i]+"="+count);
            i=i+(count-1);
        }
    }
