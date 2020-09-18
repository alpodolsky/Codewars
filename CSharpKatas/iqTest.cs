/*
Problem Given:
Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given numbers differs from the others. 
Bob observed that one number usually differs from the others in evenness. 
Help Bob — to check his answers, he needs a program that among the given numbers finds one that is different in evenness, and return a position of this number.

! Keep in mind that your task is to help Bob solve a real IQ test, which means indexes of the elements start from 1 (not 0)

##Examples :
IQ.Test("2 4 7 8 10") => 3 // Third number is odd, while the rest of the numbers are even
IQ.Test("1 2 1 1") => 2 // Second number is even, while the rest of the numbers are odd
*/
using System;
using System.Linq;

public class IQ{
    public static int Test(string numbers){ 
        //Your code is here...
        string []number = numbers.Split(' '); 
        string []even = new string[number.Length];

        int answer = 1, evens = 0;
        for(int i = 0; i < number.Length;i++){
            if(Int32.Parse(number[i])%2==0){
              even[i] = number[i];
              evens++;
            }
            else{
              even[i] = "!";
            }
        }
        for(int i = 0; i < even.Length;i++){
            if(even[i] == "!" && evens>1){
              answer = i + 1;
            }
            if(evens == 1 && even[i] != "!"){
              answer = i + 1;
            }
        }
        return answer;
    }
}