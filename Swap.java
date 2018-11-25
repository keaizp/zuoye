package work;

import java.util.Scanner;

public class Swap {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int x,y,z,t; 
		Scanner sc = new Scanner(System.in);
		x=sc.nextInt();
		y=sc.nextInt();
		z=sc.nextInt();
		if (x>y) 
		{t=x;x=y;y=t;} /*交换x,y的值*/ 
		if(x>z) 
		{t=z;z=x;x=t;}/*交换x,z的值*/ 
		if(y>z) 
		{t=y;y=z;z=t;}/*交换z,y的值*/ 
		System.out.println("small to big:"+x+y+z);
		sc.close();
	} 
}
