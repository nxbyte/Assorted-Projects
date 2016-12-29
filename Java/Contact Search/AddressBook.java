//Warren Seto
//Period 2

import java.util.*;

public class AddressBook {

	Scanner input = new Scanner (System.in);
	private ArrayList<Contact> people; 
	
	public AddressBook ()
	{
		people = new ArrayList<Contact>();
	}
	
	public void addContact ()
	{				
		String first, last, company, number;
		
		System.out.print("Enter First Name: ");
		first = input.nextLine();
		
		System.out.print("Enter Last Name: ");
		last = input.nextLine();
		
		System.out.print("Enter Company Name: ");
		company = input.nextLine();
		
		System.out.print("Enter Phone Number: ");
		number = input.nextLine();
		
		people.add(new Contact(first, last, company, number));
		
		System.out.println("Information Entered!");
	}
	
	public String findContact ()
	{
		int count; 
		String output = "";
		String content;
		
		System.out.print("Enter Search Data: ");
		content = input.nextLine();
		
		for (count = 0; count < people.size(); count++)
		{
			if (people.get(count).getfirst().contains(content) || people.get(count).getlast().contains(content) || people.get(count).getcompany().contains(content) || people.get(count).getnumber().contains(content))
			{
				output += "\n";
				output += "First Name: " + people.get(count).getfirst() + "\n";
				output += "Last Name: " + people.get(count).getlast() + "\n";
				output += "Company Name: " + people.get(count).getcompany() + "\n";
				output += "Phone Number: " + people.get(count).getnumber();
			}
		}
		
		if (output == "")
		{
			output += "No Contacts Found.";
		}
			return output;
	}
}
