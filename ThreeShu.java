package work;

public class ThreeShu {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		for(int i=0;i<5;i++)
			for(int j=0;j<5;j++)
				for(int k=0;k<5;k++)
				{
					if(i!=j&&j!=k&&i!=k)
					{
						System.out.print(i);
						System.out.print(j);
						System.out.println(k);
					}
						
				}
				
			
	}

}
