//Tribonacci Series
class Solution{
public:
int tribonacci(int n) { 
    if(n == 0)
    return 0;
    else if(n == 1 || n == 2)
    return 1;
    else{
        int ft = 0, st = 1, tt = 1;
        for(int i = 1 ;i<=n;i++){
        int fourthterm = ft + st + tt;
        ft = st;
        st = tt;
        tt = fourthterm;
        } return ft;
    }
}
};

//Fibonacci Series
class Solution{
public:
int fib(int n) { 
    if(n<=1)
    return n;
    else
    return fib(n-2) + fib(n-1);
}
};