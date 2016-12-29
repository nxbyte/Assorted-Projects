//Warren Seto
//Period 2

public class PairofDice {

	Die dieone1 = new Die(); //
	Die dieone2 = new Die(); //
	private int sum; //Sets the sum of the total from the dice roll
	
	//Allows two random number to be generated and added
	public int rolls ()
	{	
		sum = dieone1.roll() + dieone2.roll();	
		return sum; //Then returns the sum
	}
	
	
}
