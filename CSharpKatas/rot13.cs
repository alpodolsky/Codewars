/*
Problem Given:
ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. 
If there are numbers or special characters included in the string, they should be returned as they are. 
Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".
*/

using System;
public class Kata
{
  public static string Rot13(string message)
  {
    // your code here
    string outputStr = "";
    
    foreach(char character in message){
      if(!Char.IsLetter(character)){
        outputStr+=character;
      }
      else{
        if(Char.IsUpper(character)){
          outputStr+=(char)((character-'A'+13)%26+'A');
        }
        else{
          outputStr+=(char)((character-'a'+13)%26+'a');
        }
      }
    }
    return outputStr;
  }
}