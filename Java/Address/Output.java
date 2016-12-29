//Warren Seto
//Period 2

	import java.util.Scanner;

public class Output {

	public static void main(String[] args) {
		
		Scanner input = new Scanner (System.in); //Input
		Address home = new Address ("30 Happy Street", "Edison", "NJ", "08820"); //Address of student
		Address school = new Address ("855 Grove Street", "Edison", "NJ", "08820"); //Address of school
		Student warren = new Student ("Warren", "Seto", home, school); //Student Info
		int score; //Inputs the score
		
		System.out.print("Enter first score: ");
		score = input.nextInt();
		warren.setTestScore(1, score); //Assigns score, uses setTestScore
		
		System.out.print("Enter second score: ");
		score = input.nextInt();
		warren.setTestScore(2, score); //Assigns score, uses setTestScore
		
		System.out.print("Enter third score: ");
		score = input.nextInt();
		warren.setTestScore(3, score); //Assigns score, uses setTestScore
		
		System.out.println("First test score: " + warren.getTestScore(1)); //Gets a specific test score, getTestScore

		warren.average(); //Calculates the average
		
		System.out.println();
		System.out.println(warren); //Output
	}
}

/*

Output:

Enter first score: 100
Enter second score: 80
Enter third score: 90
First test score: 100.0

Warren Seto
Home Address: 30 Happy Street Edison, NJ 08820
School Address: 855 Grove Street Edison, NJ 08820
Test Scores: 100, 80, 90
Average of test scores: 90.0

*/

