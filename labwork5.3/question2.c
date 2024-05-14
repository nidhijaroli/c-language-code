//  a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

#include <stdio.h>

int main() {
    
    int language , service;
    
    printf("\n press 1 for English");
    printf("\n press 2 for Hindi");
    printf("\n press 3 for Gujarati\n");
    printf("\nenter your choice:");
    scanf("%d",&language);

    switch(language){
        case 1:
            printf("\nPress 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &service);
            switch (service) {
                
                case 1:
                    printf("\nYou have successfully done an Internet Recharge.\n");
                    break;
                    
                case 2:
                    printf("\nYou have successfully done a Top-up Recharge.\n");
                    break;
                    
                case 3:
                    printf("\nYou have successfully done a Special Recharge.\n");
                    break;
            }
            break;
        case 2:
            printf("\nInternet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &service);
            switch (service) {
                case 1:
                    printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");
                    break;
                    
                case 2:
                    printf("\nAapne safaltapurvak Top-up Recharge kar liya he.\n");
                    break;
                    
                case 3:
                    printf("\nAapne safaltapurvak Special Recharge kar liya he.\n");
                    break;
            }
            break;
        case 3:
            printf("\nInternet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &service);
            switch (service) {
                case 1:
                    printf("\nTame safaltapurvak Internet Recharge karyu chhe.\n");
                    break;
                    
                case 2:
                    printf("\nTame safaltapurvak Top-up Recharge karyu chhe.\n");
                    break;
                    
                case 3:
                    printf("\nTame safaltapurvak Special Recharge karyu chhe.\n");
                    break;
            }
            default:
                    printf("invelid choice...\n");
                    break;
    }

    return 0;
        
}