import java.util.Scanner;

public class bestCoder {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		int point=0;
		int sum=0;
		for(int i=0;i<N;i++) {
			int buff = sc.nextInt();
			
			if(buff==1) {
				point++;
				sum+=point;
			}
			else {
				point=0;
			}
		}
		
		sc.close();
		
		System.out.println(sum);
		//1.91s
	}

}
