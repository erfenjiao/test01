/**
 * 1.一维数组的创建与使用
 * 2.搜索数组的常见用法：线性查找、二分查找
 * 3.排序：选择排序、快速排序
 * 4.Java类库中的java.util.Arrays
 */
package org.yuan.my_project;

import java.util.*;

public class Arrays {
	/*
	 * 1.一维数组的创建与使用
	 * eg: 求十个数的平均数
	 * public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		int x;
		int[] numbers = new int[100];
		double sum = 0;
		int cnt = 0;
		x = cin.nextInt();
		while(x != -1)
		{
			numbers[cnt++] = x;
			sum += x;
			x = cin.nextInt();
		}
		if(cnt > 0)
		{
			double average = sum/cnt;
			for(int i = 0 ; i < cnt ; i++)
			{
				if(numbers[i] > average)
				{
					System.out.println(numbers[i]);
				}
			}
			System.out.println(sum/cnt);
		}
	}
	 **/
	//------------------------------------------------------------------------
	/*
	 * 7.16
	 * 7.16（执行时间）编写程序，随机产生一个包含100 000个整数的数组和一个关键字。
	 * 估算调用程序清单7-6中的linearSearch方法的执行时间。对该数组进行排序，
	 * 估算调用程序清单7-7中的binarySearch方法的执行时间。
	 * 输出：31300
	 **/
	/*
    public static int linearSearch(int[] list, int key)  线性查找
    {
        for (int i = 0 ; i < list.length; i++)
        {
            if (key == list[i])
                return i;
        }
        return -1;
    }


	public static int binarySearch(int[] list, int key)  二分查找
	{
	        int low = 0;
	        int high = list.length - 1;
	        
	        while(high >= low)
	        {
	            int mid = (low + high) / 2;
	            if (key < list[mid])
	                high = mid - 1;
	            else if (key == list[mid])
	                return mid;
	            else
	                low = mid + 1;
	        }
	        return -low-1;
	    }
		
	public static void main(String[] args)
	{
		//1.creat arrays
		int[] num = new int[10000];
		for(int i = 0 ; i < 10000 ; i++)
		{
			num[i] = (int)(Math.random()*10000);
		}
		//2.key
		int key_index = (int)(Math.random()*10000);
		int key = num[key_index];
		//3.调用方法linearSearch并估算时间
//		perform the task;			// 在这里调用方法
//		long endTime = System.nanoTime();
//		long executionTime = endTime - startTime;
		long startTime0 = System.nanoTime();
		linearSearch(num , key);
		long endTime0 = System.nanoTime();
		long executionTime0 = endTime0 - startTime0;
		System.out.println(executionTime0);
		
	} */
//-----------------------------------------------------------------------------------------
	/**
	 * 3.选择排序
	 * （修改选择排序）在§6.10.1中，您使用选择排序对数组进行排序。
	 * 选择排序方法重复查找当前数组中的最小数字，并将其与数组中的第一个数字交换。
	 * 通过查找最大的数字并将其与数组中的最后一个数字交换来重写此程序。
	 * 编写一个测试程序，读入十个双精度数字，调用该方法，并显示排序后的数字。
	 */
	/*
	public static void main(String args[])
	{
		Scanner cin = new Scanner(System.in);
		int maxindex = 0;
		double[] list = new double[10];
		int i , j;
		for(i = 0 ; i < 10 ; i++)
		{
			list[i] = cin.nextDouble();
		}
		double max = list[0];
		for(j = 9 ; j >= 0 ; j--)
		{
			maxindex = 0;
			if(list[j] > max)
			{
				max = list[j];
				maxindex = j;
			}
		}
		if(maxindex != 0)
		{
			list[maxindex] = list[i];
			list[i] = max;
		}
		
	}
	*/
	//--------------------------------------------------------------------------------
	/**
	 * 使用以下标头编写一个方法，如果list1和list2相同，则返回true：
		公共静态布尔相等（int[]列表1，int[]列表2）
		编写一个测试程序，提示用户输入两个整数列表，并显示两者是否相同。
	 * 
	 */
/*
public class Main{  
    public static void main(String[] args){
    	Scanner input = new Scanner(System.in);
    	int n = input.nextInt();
    	printMatrix(n);
    }
    
    public static void printMatrix(int n){
    	for(int i = 0; i < n; ++i){
    		for(int j = 0; j < n; ++j){
    			System.out.print((System.currentTimeMillis()/(j+i+1))%2 + " ");
    		}
    		System.out.println();
    	}
    }
}
*/


}
