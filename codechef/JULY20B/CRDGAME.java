/* Problem link:  https://www.codechef.com/JULY20B/problems/CRDGAME/
Chef is playing a card game with his friend Morty Smith.

The rules of the game are as follows:

There are two piles of cards, pile A and pile B, each with N cards in it. Pile A belongs to Chef and pile B belongs to Morty.
Each card has one positive integer on it
The ‘power’ of a card is defined as the sum of digits of the integer on that card
The game consists of N rounds
In each round, both players simultaneously draw one card each from the top of their piles and the player who draws the card with higher power wins this round and gets a point. If the powers of both players' cards are equal then they get 1 point each.
The winner of the game is the player who has more points at the end of N rounds. If both players have equal number of points then the game ends in a draw.
The game is now over and Chef has told Morty to find the winner. Unfortunately, this task is too complex for him. Help Morty find the winner.
*/



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class CRDGAME.java {

	public static long digitsum (long A) {
		long sum=0;
		while(A!=0){
			long x=A%10;
			sum+=x;
			A/=10;
		}
		return sum;
	}
	
	public static void main(String[] args) throws IOException{
		Reader.init(System.in);

		int t=Reader.nextInt();
		for(int p=0;p<t;p++) {
			int k=Reader.nextInt();
			
			long[] arr= new long[k];
			long chefscore=0;
			long mortyscore=0;
			for(int i=0; i<k; i++) {
				long a= Reader.nextLong();
				long b= Reader.nextLong();
				
				
				long asum=digitsum(a);
				long bsum= digitsum(b);
				
				if(asum>bsum) {
					chefscore++;
				}
				else if(bsum>asum) {
					mortyscore++;
				}
				else {
					chefscore++;
					mortyscore++;
				}

			}
			
			if(chefscore>mortyscore) {
				System.out.println(0+" "+ chefscore);
			}
			else if(mortyscore>chefscore) {
				System.out.println(1+" "+ mortyscore);
			}
			else System.out.println(2+ " "+chefscore);
			
			
		}

	}

}
class Reader {
    static BufferedReader reader;
    static StringTokenizer tokenizer;
    static void init(InputStream input) {
        reader = new BufferedReader(
                     new InputStreamReader(input) );
        tokenizer = new StringTokenizer("");
    }

    static String next() throws IOException {
        while ( ! tokenizer.hasMoreTokens() ) {

        	tokenizer = new StringTokenizer(
                   reader.readLine() );
        }
        return tokenizer.nextToken();
    }

    static int nextInt() throws IOException {
        return Integer.parseInt( next() );
    }
	
    static double nextDouble() throws IOException {
        return Double.parseDouble( next() );
    }
    static long nextLong() throws IOException {
        return Long.parseLong( next() );
    }
    

}
