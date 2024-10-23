
import java.util.Scanner;
public class Employee 
{
    String name;
    int id;
    double salary;
    public void EmployeeDetails()
    {         
        System.out.println("Employee name is: "+ name);
        System.out.println("Employee id is: "+ id);        
        System.out.println("Employee name is: "+ salary);
    }   
    public Employee()
    {     
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Name: ");
        name = sc.nextLine();
        System.out.print("Enter the id: ");
        id = sc.nextInt();
        System.out.print("Enter the Salary: ");
        salary = sc.nextDouble();
    }
    public static void main(String [] args)
    {
        Employee[] emp = new Employee[5];
        int i;
        for(i = 0; i<5; i++)
        {     
            System.out.println("\nEnter the details of Employee[" + (i+1) +"]");
            emp[i] = new Employee();
            System.out.println("###############");
        }         
        System.out.println("\n\nThe Details of the employee are: \n");
        for(i = 0; i<5; i++)
        {   
            emp[i].EmployeeDetails();
            System.out.println();
            System.out.println("###############");
        }     
    }
}
