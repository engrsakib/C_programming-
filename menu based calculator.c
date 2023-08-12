/******************************************************************************

Md. Nazmus Sakib 01992547202
Temparature Conveter

*******************************************************************************/

#include <stdio.h>

int main()
{
    //Variable
    float kelveen, celcuis, Farenhite;
    int menue;
    //Variable
    //Menue
    printf("\n 1. Celcuis to kelveen");
    printf("\n 2. kelveen to Celcuis");
    printf("\n 3. Celcuis to Farenhite");
    printf("\n 4. Farenhite to Celcuis");
    //Menue
    //Data Input
    printf("\n Select a menue: ");
    scanf("%d",&menue);
    //Data input
    //switch
    switch(menue)
    {
        //Celcuis to kelveen
        case 1:
        {
        printf("\n Celcuis to Kalveen: ");
        scanf("%f",&celcuis);
        kelveen = celcuis + 273.15;
        printf("Kalveen is : %.2f",kelveen);
        break;
        }
        //kelveen to celcuis
        case 2:
        {
        printf("\n kelveen to celcuis: ");
        scanf("%f",&celcuis);
        celcuis = kelveen - 273.15;
        printf("celcuis is : %.2f",celcuis);
        break;
        }
        //celcuis To Farenhite
        case 3:
        {
        printf("\n Celcuis to Farenhite: ");
        scanf("%f",&celcuis);
        Farenhite = (celcuis * (9/5) + 32);
        printf("Farenhite is : %.2f",Farenhite);
        break;
        }
        //Farenhite To Celcuis
        case 4:
        {
        printf("\n Farenhite to celcuis: ");
        scanf("%f",&celcuis);
        celcuis = ((Farenhite-32) * (5  / 9));
        printf("celcuis is : %.2f",celcuis);
        break;
        }
        default:
            printf("Please choce the carrcet keyword");
    }    
    
    return 0;
}
