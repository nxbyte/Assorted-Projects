//Warren Seto
//Period 2

import java.util.ArrayList;
import java.util.Scanner;
public class Output {
	public static void main(String[] args) {

	int session = 0;
	
	Scanner input = new Scanner (System.in);
	AddressBook database = new AddressBook();
	
	do {
		System.out.println("Menu: Address Book");
		System.out.println("1) Create Address Book");
		System.out.println("2) Add a contact");
		System.out.println("3) Find a Contact"); 
		System.out.println("4) Quit the session");
		
		System.out.println();
		System.out.print("Enter a request: ");
		
		session = input.nextInt();
		
		switch (session)
		{
			case 1:
				System.out.println("Address Book Created!");
				break;
				
			case 2:				
				database.addContact();
				break;
				
			case 3:
				System.out.println(database.findContact());
				break;
			
			case 4:
				System.out.println("Program Terminated");
		}
			System.out.println();
			
	} while (session != 4);	
	}
}

/*
Output: 

Menu: Address Book
1) Create Address Book
2) Add a contact
3) Find a Contact
4) Quit the session

Enter a request: 2
Enter First Name: Gail
Enter Last Name: Pawlikowski
Enter Company Name: Edison Board of Education
Enter Phone Number: 732-452-2800
Information Entered!

Menu: Address Book
1) Create Address Book
2) Add a contact
3) Find a Contact
4) Quit the session

Enter a request: 3
Enter Search Data: Gail

First Name: Gail
Last Name: Pawlikowski
Company Name: Edison Board of Education
Phone Number: 732-452-2800

Menu: Address Book
1) Create Address Book
2) Add a contact
3) Find a Contact
4) Quit the session

Enter a request: 3
Enter Search Data: 2800

First Name: Gail
Last Name: Pawlikowski
Company Name: Edison Board of Education
Phone Number: 732-452-2800

Menu: Address Book
1) Create Address Book
2) Add a contact
3) Find a Contact
4) Quit the session

Enter a request: 4
Program Terminated
*/

/*
AddressBook Class:

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

Contact class:

public class Contact {

	private String first;
	private String last;
	private String company;
	private String number;
	
	public Contact (String name1, String name2, String work, String phone)
	{
		first = name1;
		last = name2;
		company = work;
		number = phone;
	}
	   
	public String getfirst ()
	{
	   return first;
	}
	
	public String getlast ()
	{
	   return last;
	}
	
	public String getcompany ()
	{
	   return company;
	}
	
	public String getnumber ()
	{
	   return number;
	}	
}
*/