// Description:

// Given a logarithm base X and two values A and B, return a sum of logratihms with the base X: log⁡XA+log⁡XB \log_XA + \log_XB logX​A+logX​B.

//My solution
public class EasyLogs {

    public static double logs(double x, double a, double b) {
        return ((Math.log(a) / Math.log(x)) + (Math.log(b) / Math.log(x)));
    }

}