//Pushpa

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
         Scanner sc=new Scanner(System.in);
         int t_=sc.nextInt();
         while(t_-->0)
         {
             int n_ = sc.nextInt();
             int arr[]=new int[n_];
             for(int i=0;i<n_;i++)
             {                     
                  arr[i]=sc.nextInt();
             }    
             Arrays.sort(arr);
             if(n_ == 1)
             {
                System.out.println(arr[0]);
             }
             else
            {
                int max_=0;
                int c_=0;
            for (int i=n_-1;i>=1;i--)
                {
                    if(arr[i]==arr[i-1])
                    {
                        c_++;
                    }
                    else{
                        if(max_ < arr[i]+c_)
                        {
                        max_=arr[i]+c_;
                        }
                        c_=0;
                    }
                }
                System.out.println(max_);
            }
        }
    }
}