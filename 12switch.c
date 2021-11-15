#include <stdio.h>
int main(){
    int choice;
        printf("  MENU\n1) porotta\n2) biryani\n3) friedrice\n4) mandhi\nenter your choice\n");
        scanf("%d", &choice);
    switch(choice){
    case 1:
        printf("you selected 1st option porotta");
    break;
    case 2:
        printf("you selected 2nd option biriyani");
    break;
    case 3:
        printf("you selected 3rd option friedrice");
    break;
    case 4:
        printf("you selected 4th option mandhi");
    break;
    default:
        printf("you have enterd wrong option please try again");    
    }
    return 0;

}