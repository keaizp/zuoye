package work;

public class Koujue {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int i,j,result; 
		System.out.println();
		for (i=1;i<10;i++) 
		{ for(j=1;j<10;j++) 
		{ 
		result=i*j; 
		System.out.printf("%d*%d=%-3d",i,j,result);/*-3d表示左对齐，占3位*/ 
		} 
		System.out.println();/*每一行后换行*/ 
		} 


	}

}
