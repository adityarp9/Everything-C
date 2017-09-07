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
	cust = fopen("Customer.txt", "a+");
    for (int x = 0; x < n; x++)
    {
        printf("Customer %d:\n", x + 1);

        printf("Name: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> customerName = GetString();
		if (stringErr(pLaptop[x] -> customerName))
			return 2;
		puts(pLaptop[x] -> customerName);	
        putchar('\n');

        printf("Device name: ");
        pLaptop[x] = malloc(sizeof(struct pc));
        pLaptop[x] -> deviceName = GetString();
		if (stringErr(pLaptop[x] -> deviceName))
			return 2;
		puts(pLaptop[x] -> deviceName);	
        putchar('\n');
	 }
	 
	 for (int x = 0; x < n; x++)
	{
		fprintf(cust, "\tCustomer %d\n", x + 1);
		fprintf(cust, "%.2lf\n", pLaptop[x] -> price);
		fprintf(cust, "%s\n", pLaptop[x] -> deviceName);
		fprintf(cust, "%s\n", pLaptop[x] -> customerName);
	}

	fclose(cust);

	return 0;
}

bool stringErr(char* x)
{
	if (x == NULL)
	 	return true;
	else
		return false;
}
