/*
Problem Given:
I love Fibonacci numbers in general, but I must admit I love some more than others.

I would like for you to write me a function that when given a number (n) returns the n-th number in the Fibonacci Sequence.

For example:
  nthFibo(4) == 2
  Because 2 is the 4th number in the Fibonacci Sequence.

For reference, the first two numbers in the Fibonacci sequence are 0 and 1, 
and each subsequent number is the sum of the previous two.
*/
typedef unsigned long long ull;
ull nth_fib(int n) {
    //  <----  hajime!
  if(n==1){
    return 0;
  }
  if(n==2){
    return 1;
  }
  ull fib1 = 0, fib2 = 1;
  for(int i = 2; i < n;i++){
    if(i%2==0){
      fib1+=fib2;
    }
    else{
      fib2+=fib1;
    }
  }
  if(n%2==0){
    return fib2;
  }
  return fib1;
  //recursive method:
  /*
  if(n==1){
    return 0;
  }
  if(n==2){
    return 1;
  }
  return nth_fib(n-1)+nth_fib(n-2);  
  */
}