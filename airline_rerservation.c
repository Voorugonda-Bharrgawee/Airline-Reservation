#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SEATS 100

struct Passenger {
    char name[50];
    int age;
    char gender;
    int seat_num;
    int is_reserved;
    char from[10];
    char to[10];
    int time;
};
long long int bal=210723;
struct Passenger passengers[MAX_SEATS];
void initialize() 
{
	int i;
    for ( i = 0; i < MAX_SEATS; i++) 
	{
        passengers[i].is_reserved = 0;
    }
}

void display() 
{
	int i;
    printf("Seat Number\tName\t\tAge\tGender\tFrom\tTo\tduration\n");
    for ( i = 0; i < MAX_SEATS; i++) 
	{
        if (passengers[i].is_reserved) 
		{
            printf("%d\t\t%s\t\t%d\t%c\t%s\t%s\t%d hour(s)\n", passengers[i].seat_num, passengers[i].name, passengers[i].age, passengers[i].gender,passengers[i].from,passengers[i].to,passengers[i].time);
        } else {
            printf("%d\t\t--\n", i + 1);
        }
    }
}

void reserve()
 {
	int code,opt,dlh,amtsd,dbi,sdny;
    struct Passenger passenger;
    printf("Enter passenger name: ");
    scanf("%s", passenger.name);
    printf("Enter passenger age: ");
    scanf("%d", &passenger.age);
    printf("Enter passenger gender (M/F): ");
    scanf(" %c", &passenger.gender);
    system("cls");
    printf("Choose your Starting point:\n");
    printf("1. Sydney.\n");
    printf("2. Amsterdam.\n");
    printf("3. Newyork.\n");
    printf("4. Dubai.\n");
    scanf("%d",&opt);
	printf("For confermation, enter the city name here: ");
	scanf("%s",passenger.from);
    switch(opt)
    {
    	case 1: 
    		{	
    			printf("Choose your Destination:\n");
    			printf("1. Amsterdam.\n");
    			printf("2. Newyork.\n");
    			printf("3. Dubai.\n");
    			scanf("%d",&sdny);
    			printf("For conformation, enter the city name here: ");
    			scanf("%s",passenger.to);
    			printf("Enter preferred seat number: ");
   				 scanf("%d", &passenger.seat_num);
   				 printf("Enter your UPI pin: ");
 			  	 scanf("%d",&code);
    			switch(sdny)
    			{
    				case 1: printf("\n\n-----------Reservation successful!-----------\n");
    						printf("Happy journey to 'Amsterdam'.....\n\n");
   							bal=bal-49013;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=24;
   							break;
   					case 2: printf("\n\n-----------Reservation successful!-----------\n ");
   							printf("Happy journey to 'Newyork'.....\n\n");
   							bal=bal-70352;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=20;
   							break;
   					case 3: printf("\n\n-----------Reservation successful!-----------\n");
   							printf("Happy journey to 'Dubai'.....\n\n");
   							bal=bal-47273;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=14;
   							break;
   					default:printf("\n\nChoose from given options.\n\n");
   							break;
				}
			}
			break;
		case 2: 
    		{	
    			printf("Choose your Destination:\n");
    			printf("1. Sydney.\n");
    			printf("2. Newyork.\n");
    			printf("3. Dubai.\n");
    			scanf("%d",&sdny);
    			printf("For conformation, enter the city name here: ");
    			scanf("%s",passenger.to);
    			printf("Enter preferred seat number: ");
   				 scanf("%d", &passenger.seat_num);
   				 printf("Enter your UPI pin: ");
 			  	 scanf("%d",&code);
    			switch(sdny)
    			{
    				case 1: printf("\n\n-----------Reservation successful!-----------\n");
    						printf("Happy journey to 'Sydney'.....\n\n");
   							bal=bal-62736;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=24;
   							break;
   					case 2: printf("\n\n-----------Reservation successful!-----------\n ");
   							printf("Happy journey to 'Newyork'.....\n\n");
   							bal=bal-21540;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=8;
   							break;
   					case 3: printf("\n\n-----------Reservation successful!-----------\n");
   							printf("Happy journey to 'Dubai'.....\n\n");
   							bal=bal-17083;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=6;
   							break;
   					default:printf("\n\nChoose from given options.\n\n");
   							break;
				}			
			}
			break;
		case 3: 
    		{	
    			printf("Choose your Destination:\n");
    			printf("1. Sydney.\n");
    			printf("2. Amsterdam.\n");
    			printf("3. Dubai.\n");
    			scanf("%d",&sdny);
    			printf("For confermation, enter the city name here: ");
    			scanf("%s",passenger.to);
    			printf("Enter preferred seat number: ");
   				 scanf("%d", &passenger.seat_num);
   				 printf("Enter your UPI pin: ");
 			  	 scanf("%d",&code);
    			switch(sdny)
    			{
    				case 1: printf("\n\n-----------Reservation successful!-----------\n");
    						printf("Happy journey to 'Sydney'.....\n\n");
   							bal=bal-76142;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=20;
   							break;
   					case 2: printf("\n\n-----------Reservation successful!-----------\n ");
   							printf("Happy journey to 'Amsterdam'.....\n\n");
   							bal=bal-50310;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=8;
   							break;
   					case 3: printf("\n\n-----------Reservation successful!-----------\n");
   							printf("Happy journey to 'Dubai'.....\n\n");
   							bal=bal-47543;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=14;
   							break;
   					default:printf("\n\nChoose from given options.\n\n");
   							break;
				}			
			}
			break;
		case 4: 
    		{	
    			printf("Choose your Destination:\n");
    			printf("1. Sydney.\n");
    			printf("2. Amsterdam.\n");
    			printf("3. Newyork.\n");
    			scanf("%d",&sdny);
    			printf("For confermation, enter the city name here: ");
    			scanf("%s",passenger.to);
    			printf("Enter preferred seat number: ");
   				 scanf("%d", &passenger.seat_num);
   				 printf("Enter your UPI pin: ");
 			  	 scanf("%d",&code);
    			switch(sdny)
    			{
    				case 1: printf("\n\n-----------Reservation successful!-----------\n");
    						printf("Happy journey to 'Sydney'.....\n\n");
   							bal=bal-42957;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=14;
   							break;
   					case 2: printf("\n\n-----------Reservation successful!-----------\n ");
   							printf("Happy journey to 'Amsterdam'.....\n\n");
   							bal=bal-19242;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=6;
   							break;
   					case 3: printf("\n\n-----------Reservation successful!-----------\n");
   							printf("Happy journey to 'Newyork'.....\n\n");
   							bal=bal-42237;
   							printf("\nyour Balance left in your bank account: %d\n\n\n",bal);
   							passenger.time=14;
   							break;
   					default:printf("\n\nChoose from given options.\n\n");
   							break;
				}			
			}
			break;
		default:printf("\n\nChoose from given options.\n\n");
   			break;
	}
	
    if (passenger.seat_num < 1 || passenger.seat_num > MAX_SEATS) {
        printf("Invalid seat number!\n");
        return;
        goto abc;
    }
    if (passengers[passenger.seat_num - 1].is_reserved) 
	{
        printf("\n\nxxx__________Seat already reserved!__________xxx\n");
        return;
        goto abc;
    }
   	passengers[passenger.seat_num - 1] = passenger;
   	passengers[passenger.seat_num - 1].is_reserved = 1;
   	abc:
   		printf("  ");
}

void cancel()
 {
    int seat_num;
    printf("Enter seat number to cancel reservation: ");
    scanf("%d", &seat_num);
    if (seat_num < 1 || seat_num > MAX_SEATS)
	 {
        printf("\n\n_________Invalid seat number!_________\n\n");
        return;
    }
    if (!passengers[seat_num - 1].is_reserved)
	 {
        printf("No reservation found for this seat number!\n");
        return;
    }
    passengers[seat_num - 1].is_reserved = 0;
    printf("Reservation cancelled successfully!\n");
}

int main()
 {
    int choice;
    initialize();
    while (1) {
        printf("\n--- Airline Reservation System ---\n");
        printf("1. Display available seats\n");
        printf("2. Reserve a seat\n");
        printf("3. Cancel a reservation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
		{
            case 1:
                display();
                break;
            case 2:
                reserve();
                break;
            case 3:
                cancel();
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}




