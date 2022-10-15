#include <iostream> 
#include<windows.h>                 //header file for Sleep(time in millliseconds)
#include<cstdlib>                   //header file for srand() and rand()
#include<time.h>                    //header file for time(0)
#include<cstring>                   ////header file for strings

using namespace std;  


string otpgenerator( int digits){ 
    string otp;
    string str="0123456789";
    int k=str.length(); 
    srand(time(0)); 
    for(int i=0;i<digits;i++){ 
       int j=rand()%k;
       otp[i]=str[j];
    }
   for(int j=0;j<digits;j++){
 cout<<otp[j];
    
    } 
    return otp;
}
   
int main() {
top:                              //label 
system("cls");
int choice,n;
printf("**OTP Generator**\n"); 
printf("Enter your choice:\n");   
printf("1.OTP\n");   
printf("2.Exit\n");  
cin>>choice;
if(choice==1){ 
        printf("Enter the number of digits in your OTP:\n");  
        cin>>n;
        cout<<"Your OTP is:\n";
        cout<<otpgenerator(n)<<endl; 
        printf("OTP will expire in 10 seconds.....\n");  
        Sleep(10000);              //time in milliseconds
        printf("OTP expired.....\n");   
        Sleep(5000);
        goto top;                  // label to return to main menu             
    }  
 else if(choice==2){
        exit(0);
    } 
else{ 
    printf("invalid choice"); 
}
        
    return 0;
}
