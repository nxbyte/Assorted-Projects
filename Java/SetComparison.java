//Warren Seto
//Period 2
import java.util.Random;
public class SetComparison {
	public static void main(String[] args) {

		 int count;
		 long start, end; //Values for milliseconds
		 int[] list1 = new int[100000]; //Sets an array of 100000 ints
		 int[] list2 = new int[100000];
		 Random gen = new Random(); //Initialize random class

		 for (count = 0; count < list1.length; count++) //Loop that assigns random numbers
		 {
			 list1[count] = gen.nextInt(2000000) + 0; //Generates random numbers to the first array
			 list2[count] = list2[count]; //Make an identical array
		 }
		 
		 //============================================(InsertionSort Tester)
		 start = System.currentTimeMillis();
		 
		 insertionSort(list1);
		 
		 end = System.currentTimeMillis();
		 
		 System.out.println("It takes: " + (end - start) + " Milliseconds for the InsertionSort"); 
		 //============================================
		 
		 //============================================(SelectionSort Tester)
		 start = System.currentTimeMillis();
		 
		 selectionSort(list2);
		 
		 end = System.currentTimeMillis();
		
		 System.out.println("It takes: " + (end - start) + " Milliseconds for the SelectionSort");
		 //============================================
	}
	   public static void insertionSort (int[] numbers)
	   {
	      for (int index = 1; index < numbers.length; index++)
	      {
	         int key = numbers[index];
	         int position = index;

	         // shift larger values to the right
	         while (position > 0 && numbers[position-1] > key)
	         {
	            numbers[position] = numbers[position-1];
	            position--;
	         }
	            
	         numbers[position] = key;
	      }
	   }
	
	   public static void selectionSort (int[] numbers)
	   {
	      int min, temp;

	      for (int index = 0; index < numbers.length-1; index++)
	      {
	         min = index;
	         for (int scan = index+1; scan < numbers.length; scan++)
	            if (numbers[scan] < numbers[min])
	               min = scan;

	         // Swap the values
	         temp = numbers[min];
	         numbers[min] = numbers[index];
	         numbers[index] = temp;
	      }
	   }
}
