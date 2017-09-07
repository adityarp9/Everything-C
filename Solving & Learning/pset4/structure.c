#include <stdio.h>
#include <cs50.h>

struct pc
{
	char *customerName, *deviceName, *processor, *ram, *hardDisk, *graphics, *screenTech;
	double price;
};


int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Usage:%s NoOfCustomers\n", argv[0]);
		return 1;
	}
	int n = atoi(argv[1]);
	struct pc customer[n];

	printf("Enter the details of your PC :\n");	
	for (int i = 0; i < n; i++)
	{
		printf("Customer %d:\n", i + 1);
		
		printf("Name: ");
		customer[i].customerName = GetString();
		putchar('\n');
		
		printf("Device name: ");		
		customer[i].deviceName = GetString();
		putchar('\n');
		
		printf("Processor: ");		
		customer[i].processor = GetString();
		putchar('\n');
		
		printf("Ram: ");		
		customer[i].ram = GetString();
		putchar('\n');
		
		printf("Hard Disk space: ");		
		customer[i].hardDisk = GetString();
		putchar('\n');
		
		printf("Graphics: ");		
		customer[i].graphics = GetString();
		putchar('\n');
		
		printf("Screen display technology: ");		
		customer[i].screenTech = GetString();
		putchar('\n');
		
		printf("Price in Rupees: ");		
		customer[i].price = GetInt();
		putchar('\n');
		
		printf("That's it. %s, your profile has been created.\nThank You for your patience :).\n", customer[i].customerName);
	}
	
}	
