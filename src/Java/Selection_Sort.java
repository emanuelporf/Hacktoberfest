//Selection Sort Modified
import java.util.Scanner;
class Main
{

  public static void main(String[] args)
  {

    Scanner sc=new Scanner(System.in);
    System.out.print("Enter Size: ");
    int p=sc.nextInt();
    int[] arr = new int[p];
    for(int i=0;i<p;++i)
    {
        System.out.print("Enter Element Number " + (i+1)+": ");
      arr[i]=sc.nextInt();
      System.out.println();
    }
    int n = arr.length;
    for(int i=0;i<n;++i)
    {
      int pos=i,t=0;
      for(int j=i+1;j<n;++j)
      {
        if(arr[pos]>arr[j])
        pos=j;

      }
      t=arr[pos];
      arr[pos]=arr[i];
      arr[i]=t;

    }
    for (int i=0; i<n; ++i)
                System.out.print(arr[i]+" ");
            System.out.println();
        }


  }
