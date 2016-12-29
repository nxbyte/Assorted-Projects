//Warren Seto
//Period 2

public class Output {

	public static void main(String[] args) {

		//Declare two fractions
		Rational first = new Rational (4, 3);
		Rational second = new Rational (1, 2);	
		
		//Output the values of the objects
		System.out.println("First value: " + first);
		System.out.println("Second value: " + second);
		
		//Determines which object is: equal to, less than, or greater than the two objects:
	
		System.out.println();
		System.out.print("Result: ");
		
		if (first.compareTo (second) == -1) //Greater than 0
		{
			System.out.print(first + " > " + second);
		}
		
		else if (first.compareTo (second) == 1) //Less than 0
		{
			System.out.print(first + " < " + second);
		}	
		
		else if (first.compareTo (second) == 0) //Equal To 0
		{
			System.out.print(first + " = " + second);
		}	
	}
}
