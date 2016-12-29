//********************************************************************
//  Student.java       Author: Lewis/Loftus
//
//  Represents a college student.
//********************************************************************

//Warren Seto
//Period 2

public class Student
{
   private String firstName, lastName;
   private Address homeAddress, schoolAddress;
   private int grade;
   private int grade1;
   private int grade2;
   private int grade3;
   private double avg;

   //-----------------------------------------------------------------
   //  Sets up this Student object with the specified initial values.
   //-----------------------------------------------------------------
   public Student (String first, String last, Address home, Address school)
   {
      firstName = first;
      lastName = last;
      homeAddress = home;
      schoolAddress = school;
      grade1 = 0;
      grade2 = 0;
      grade3 = 0;
      avg = 0;
   }
   //-----------------------------------------------------------------
   //  Sets the test score for each score
   //----------------------------------------------------------------- 
   public void setTestScore(int num, int grade) 
   {   
	   if (num == 1)
		   grade1 = grade;
	   
	   if (num == 2)
		   grade2 = grade;
	   
	   if (num == 3)
		   grade3 = grade;
   }
   //-----------------------------------------------------------------
   //  Calculates the average
   //----------------------------------------------------------------- 
   public double average ()
   {
	  return avg = (grade1 + grade2 + grade3) / 3;
   }  
   //-----------------------------------------------------------------
   //  Returns a Student's specific grade.
   //----------------------------------------------------------------- 
   public double getTestScore (int choose) 
   {
	   if (choose == 1)
		   grade = grade1;
	   
	   if (choose == 2)
		   grade = grade2;
	   
	   if (choose == 3)
		   grade = grade3;
	   
	   return grade;
   }
   //-----------------------------------------------------------------
   //  Returns this Student object as a string.
   //-----------------------------------------------------------------
   public String toString()
   {
      String result;

      result = firstName + " " + lastName + "\n";
      result += "Home Address: " + homeAddress + "\n";
      result += "School Address: " + schoolAddress + "\n";
      result += "Test Scores: " + grade1 + ", " + grade2 + ", " + grade3 + "\n";
      result += "Average of test scores: " + avg;

      return result;
   }
}
