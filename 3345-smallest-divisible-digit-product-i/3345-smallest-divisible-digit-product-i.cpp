class Solution {
public:

    int productDigits(int num){
        if (num==0){
            return 1;
        }
        return (num%10) * productDigits(num/10);
    }

    int smallestNumber(int n, int t) {
        
        int prod = productDigits(n);
        while (prod%t != 0){
            n++;
            prod = productDigits(n);
        }

        return n;
    }





    // int smallestNumber(int n, int t) {
    //     int prod = 1;
    //     int num = n;
    //     while(num>0){
    //         prod *= num%10;
    //         num/=10;
    //     }
    //     if (prod%t != 0){
    //         n++;
    //     }
    //     return n;
    // }
};