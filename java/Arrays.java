/**
 * 1.һά����Ĵ�����ʹ��
 * 2.��������ĳ����÷������Բ��ҡ����ֲ���
 * 3.����ѡ�����򡢿�������
 * 4.Java����е�java.util.Arrays
 */
package org.yuan.my_project;

import java.util.*;

public class Arrays {
	/*
	 * 1.һά����Ĵ�����ʹ��
	 * eg: ��ʮ������ƽ����
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
	 * 7.16��ִ��ʱ�䣩��д�����������һ������100 000�������������һ���ؼ��֡�
	 * ������ó����嵥7-6�е�linearSearch������ִ��ʱ�䡣�Ը������������
	 * ������ó����嵥7-7�е�binarySearch������ִ��ʱ�䡣
	 * �����31300
	 **/
	/*
    public static int linearSearch(int[] list, int key)  ���Բ���
    {
        for (int i = 0 ; i < list.length; i++)
        {
            if (key == list[i])
                return i;
        }
        return -1;
    }


	public static int binarySearch(int[] list, int key)  ���ֲ���
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
		//3.���÷���linearSearch������ʱ��
//		perform the task;			// ��������÷���
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
	 * 3.ѡ������
	 * ���޸�ѡ�������ڡ�6.10.1�У���ʹ��ѡ������������������
	 * ѡ�����򷽷��ظ����ҵ�ǰ�����е���С���֣��������������еĵ�һ�����ֽ�����
	 * ͨ�������������ֲ������������е����һ�����ֽ�������д�˳���
	 * ��дһ�����Գ��򣬶���ʮ��˫�������֣����ø÷���������ʾ���������֡�
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
	 * ʹ�����±�ͷ��дһ�����������list1��list2��ͬ���򷵻�true��
		������̬������ȣ�int[]�б�1��int[]�б�2��
		��дһ�����Գ�����ʾ�û��������������б�����ʾ�����Ƿ���ͬ��
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
