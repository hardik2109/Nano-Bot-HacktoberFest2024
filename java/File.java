public class file{
    public static void main(String[] args) {
        for(int i=0;i<7;i++){
            for(int j=1;j<=i;j++){
            System.out.print(" ");
        }
        for(int j=i+1;j<=7;j++){
            System.out.print(j+" ");
        }
        System.out.println();
    }
    for(int i=5;i>=0;i--){
        for(int j=i;j>0;j--){
            System.out.print(" ");
        }
    
        for(int j=i+1;j<=7;j++){
            System.out.print(j+" ");
        }
        System.out.println();
    }
}
}
