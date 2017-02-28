package lab4Q3;

public class Person  {
	private String firstName;
	private String lastName; 
	
	public Person( String s, String l )
	{
	    // capitalization of getLastName was wrong
        lastName = l;
        firstName = s;
	}
	
	public String getFirstName()
	{
	   return firstName; 
	}

    public String getLastName()
	{
	   return lastName;        
	}
}