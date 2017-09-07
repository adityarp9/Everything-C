/*
 *
 * This code won't work. Since I've made a mallocing problem.
 * Let's see if you can find out.
 * 
 * Edit: It works because of a workaround!
 *
 */


#include <stdio.h>
#include <cs50.h>

struct pc
{
	char *customerName, *deviceName, *processor, *ram, *hardDisk, *graphics, *screenTech;
	double price;
};
bool stringErr(char*);
FILE *cust;

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Usage:%s NoOfCustomers\n", argv[0]);
		return 1;
	}
	int n = atoi(argv[1]);

    struct pc *pLaptop[n];
    cust = fopen("Customer.txt", "a");
    if (cust == NULL)
    {
    	printf("Error in opening the file. Pleas try again.\n");
    	return 5;
    }
    for (int x = 0; x < n; x++)
    {
        printf("Customer %d:\n", x + 1);
        fprintf(cust, "\tCustomer %d\n", x + 1);

        printf("Name: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> customerName = GetString();
	if (stringErr(pLaptop[x] -> customerName))
		return 2;
	fprintf(cust, "Name: %s\n", pLaptop[x] -> customerName);	
        putchar('\n');

        printf("Device name: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> deviceName = GetString();
	if (stringErr(pLaptop[x] -> deviceName))
		return 2;
	fprintf(cust, "Device name: %s\n", pLaptop[x] -> deviceName);	
        putchar('\n');

	printf("Processor: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> processor = GetString();
	if (stringErr(pLaptop[x] -> processor))
			return 2;
	fprintf(cust, "Processor: %s\n", pLaptop[x] -> processor);			
        putchar('\n');

	printf("Ram: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> ram = GetString();
	if (stringErr(pLaptop[x] -> ram))
		return 2;
	fprintf(cust, "Ram: %s\n", pLaptop[x] -> ram);		
        putchar('\n');

	printf("Hard disk space: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> hardDisk = GetString();
	if (stringErr(pLaptop[x] -> hardDisk))
		return 2;
	fprintf(cust, "Hard disk space: %s\n", pLaptop[x] -> hardDisk);		
        putchar('\n');

	printf("Graphics: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> graphics = GetString();
	if (stringErr(pLaptop[x] -> graphics))
		return 2;
	fprintf(cust, "Graphics: %s\n", pLaptop[x] -> graphics);		
        putchar('\n');

	printf("Screen display technology: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> screenTech = GetString();
	if (stringErr(pLaptop[x] -> screenTech))
		return 2;
	fprintf(cust, "Screen display technology: %s\n", pLaptop[x] -> screenTech);	
        putchar('\n');

	printf("Price in rupees: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> price = GetDouble();
        fprintf(cust, "Price in rupees: %.3lf\n", pLaptop[x] -> price);
        fprintf(cust, "\n\n");
        puts("\n\n");
    }
    
    printf("Do you want to know the contents of Customer.txt?\nY or N?\n");
    char op = getchar();
    if ((op == 'n') || (op == 'N'))
    {
    	printf("As you say!\n");
    	return 3;
    }
    fclose(cust);
    free(pLaptop);
    
    FILE *custR = fopen("Customer.txt", "r");
    if (custR == NULL)
    {
    	printf("Error reading file. Please try again!\n");
    	return 5;
    }
    char x[512];
    for (int i = 0; fgets(x, 512, custR) != NULL; i++)
    {
    	printf("Line %02d:%s", i + 1, x);
    }
    

    return 0;
}

bool stringErr(char* x)
{
	if (x == NULL)
		return true;
	else
		return false;
}
