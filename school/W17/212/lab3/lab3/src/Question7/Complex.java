package Question7;
import javax.swing.*;
import java.util.Objects;
/**
 * Created by mmurtadi on 13/02/17.
 */
public class Complex {
    private final double realPart;
    private final double imaginaryPart;

    private Complex(double real, double imaginary) {

        realPart = real;
        imaginaryPart = imaginary;
    }
    /**
     * returns real portion of number
     */
     double getRealPart(){
        return realPart;
     }
    /**
     * returns imaginary portion of object
     */
     double getImaginaryPart(){
         return imaginaryPart;
     }
    /**
     * sums 2 complex numbers
     */
    public Complex plus(Complex b) {
        Complex a = this;             // invoking object
        double real = a.realPart + b.realPart;
        double  imaginary = a.imaginaryPart + b.imaginaryPart;
        return new Complex(real, imaginary);
    }
    /**
     * subtracts object from another object
     */
    public Complex minus(Complex b) {
        Complex a = this;
        double real = a.realPart - b.realPart;
        double imaginary = a.imaginaryPart - b.imaginaryPart;
        return new Complex(real, imaginary);
    }
    /**
     * prints number as per instructions in assignment
     */
    public void print(Complex a){
        JOptionPane.showMessageDialog(null, "number = " + a.realPart + " " + a.imaginaryPart + "\n");
    }
}





