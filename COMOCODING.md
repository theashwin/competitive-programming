//hackearth question


//You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) 
//are divisible by k. You do not need to print these numbers, you just have to find their count.
//
//Input Format
//The first and only line of input contains 3 space separated integers l, r and k.
//
//Output Format
//Print the required answer on a single line.
//

import java.util.Scanner;
public class hackEarth {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		int l = sc.nextInt();

		int r = sc.nextInt();

		int k = sc.nextInt();

		int count = 0;

		for(int i = l;i<=r;i++) {

		if(i%k== 0) {

		count++;

		}

		} System.out.println(count);
}

}
