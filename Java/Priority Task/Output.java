//Warren Seto
//Period 2

public class Output {

	public static void main(String[] args) {

		System.out.println("Task Priority");//Task Priority Project
		System.out.println();
		
		//Create first task
		Task task1 = new Task("Study for APUSH");
		task1.setPriority(2);

		//Create second task
		Task task2 = new Task("Study for Java");
		task2.setPriority(3);
		
		//Create third task
		Task task3 = new Task("Go to Sleep");
		task3.setPriority(1);
		
		//Sorts the tasks according to their Priority		
		if (task1.getPriority() == 3) //High Priority
			System.out.println(task1.toString());

		if (task2.getPriority() == 3) //High Priority
			System.out.println(task2.toString());
		
		if (task3.getPriority() == 3) //High Priority
			System.out.println(task3.toString());
		
		if (task1.getPriority() == 2) //Medium Priority
			System.out.println(task1.toString());
		
		if (task2.getPriority() == 2) //Medium Priority
			System.out.println(task2.toString());
		
		if (task3.getPriority() == 2) //Medium Priority
			System.out.println(task3.toString());
		
		if (task2.getPriority() == 1) //Low Priority
			System.out.println(task1.toString());
	
		if (task1.getPriority() == 1) //Low Priority
			System.out.println(task2.toString());
		
		if (task3.getPriority() == 1) //Low Priority
			System.out.println(task3.toString());
	}
}
