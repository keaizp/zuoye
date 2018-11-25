package work;

public class Number {
	public static void main(String[] args) {
		double  i,x,y; 
		for (i=1;i<100000;i++) 
		{ 
			x=Math.sqrt(i+100); /*x为加上100后开方后的结果*/ 
			y=Math.sqrt(i+268); /*y为再加上168后开方后的结果*/ 
			if(x*x==i+100&&y*y==i+268)/*如果一个数的平方根的平方等于该数，这说明此数是完全平方数*/ 
				System.out.println(i); 
		}
	}

}
