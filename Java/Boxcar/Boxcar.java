//Warren Seto
//Period 2

public class Boxcar {

	public static void main(String[] args) {
	
		PairofDice boxcar = new PairofDice(); //Calls PairofDice object
		int total = 0; //Starts counting from 0
		int count; //Regulates the for-loop
		
		System.out.println("Boxcar"); //Boxcar Project
		
		for (count = 1; count < 1000; count++) //Counts from 0 to 1000
		{
			if (boxcar.rolls() == 12) //If the total from the PairofDice class has a result of 12
				total++; //Adds one if the total is 12
		}
		
		//Outputs:
		System.out.print("Probability of a boxcar: " + total + "/1000 rolls");

	}

}
