package lab4Q3;

import java.text.DecimalFormat;
public class Miles  {    
	private double miles;
    DecimalFormat DecimalFormatMile = new DecimalFormat( "0" );

    public Miles()
	{
	   setMile( 0.0 );
	}
	
	public void setMile( double m )
	{
	   miles = ( ( m >= 0.0 && m <= 200000 ) ? m : 0 );
	}
	
	public String toMilesString()
	{
	    //Syntax was incorrect for creating object based off API Page.
	   return DecimalFormatMile.format( miles );
	}
}