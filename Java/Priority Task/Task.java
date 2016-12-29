//Warren Seto
//Period 2

public class Task implements Priority {

	private String taskname;
	private int Prioritycode;
	
	public Task (String name) //Sets the name of the task
	{
		taskname = name;
	}

	public void setPriority (int rating) //Sets the Priority of the task
	{
		Prioritycode = rating;
	}
	
	public int getPriority () //Return the Priority of the task
	{
		return Prioritycode;
	}
	
	public String toString () //Layout the output
	{
		String output = taskname + " " + Prioritycode;
		
		return output;
	}
}

/*
public interface Priority 
{
	public void setPriority(int rating);
	public int getPriority();
}
*/
