# include <stdio.h>
# include <cs50.h>

int main(){
//first create a variable to store name
	string name;
//ask user for a name
//store name in variable
//this get string is not a part of std c library so we export cs50 library
//also run {export LDLIBS='-lcs50'} before compiling
	get_string("please enter your name : ");
//print hello name
printf("Hello, %s!\n, name"); 


}