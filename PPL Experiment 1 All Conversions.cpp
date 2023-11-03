#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Enter the conversion you want to perform:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("3. Octal to Binary\n");
    printf("4. Binary to Octal\n");
    printf("5. Hexadecimal to Binary\n");
    printf("6. Binary to Hexadecimal\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int bin, rem, i = 0, dec = 0;
            printf("Enter any binary number: ");
            scanf("%d", &bin);
            
            while (bin != 0) {
                rem = bin % 10;
                bin = bin / 10;
                dec = dec + rem * pow(2, i);
                i++;
            }
            printf("The decimal number is: %d\n", dec);
            break;
        }
        case 2: {
            int dec, rem, arr[300];
            printf("Enter decimal number: ");
            scanf("%d", &dec);
            
            int i = 0;
            while (dec > 0) {
                arr[rem] = dec % 2;
                dec = dec / 2;
                rem++;
            }
            printf("The output is: ");
            for (int j = rem - 1; j >= 0; j--) {
                printf("%d", arr[j]);
            }
            printf("\n");
            break;
        }
        case 3: {
            char arr[100];
            long i = 0;
 
            printf("Enter any octal number: ");
            scanf("%s", arr);
            printf("Equivalent binary value: ");
            while (arr[i]) {
                switch (arr[i]) {
                    case '0':
                        printf("000");
                        break; 
                    case '1':
                        printf("001");
                        break;
                    case '2':
                        printf("010");
                        break;
                    case '3':
                        printf("011");
                        break;
                    case '4':
                        printf("100");
                        break;
                    case '5':
                        printf("101"); 
                        break;
                    case '6':
                        printf("110");
                        break;
                    case '7':
                        printf("111");
                        break;
                    default:
                        printf("\nInvalid octal digit %c ", arr[i]);
                        return 0;
                }
                i++;
            }
            printf("\n");
            break;
        }
        case 4: {
            int i, oct = 0, dec = 0;
            int bin;

            printf("Enter the Binary Number: ");
            scanf("%ld", &bin);
            
            i = 0;
            while (bin != 0) {
                dec = dec + (bin % 10) * pow(2, i);
                bin = bin / 10;
                i++;
            }

            i = 1;
            while (dec != 0) {
                oct = oct + (dec % 8) * i;
                dec = dec / 8;
                i = i * 10;
            }
            printf("The octal Value: %d\n", oct);
            break;
        }
        case 5: {
            char hex[1000];
            long int i = 0;

            printf("Enter the value for hexadecimal: ");
            scanf("%s", hex);
            printf("Binary value is: ");
            while (hex[i]) {
                switch (hex[i]) {
                    case '0':
                        printf("0000");
                        break;
                    case '1':
                        printf("0001");
                        break;
                    case '2':
                        printf("0010");
                        break;
                    case '3':
                        printf("0011");
                        break;
                    case '4':
                        printf("0100");
                        break;
                    case '5':
                        printf("0101");
                        break;
                    case '6':
                        printf("0110");
                        break;
                    case '7':
                        printf("0111");
                        break;
                    case '8':
                        printf("1000");
                        break;
                    case '9':
                        printf("1001");
                        break;
                    case 'A':
                    case 'a':
                        printf("1010");
                        break;
                    case 'B':
                    case 'b':
                        printf("1011");
                        break;
                    case 'C':
                    case 'c':
                        printf("1100");
                        break;
                    case 'D':
                    case 'd':
                        printf("1101");
                        break;
                    case 'E':
                    case 'e':
                        printf("1110");
                        break;
                    case 'F':
                    case 'f':
                        printf("1111");
                        break;
                    default:
                        printf("Invalid hexadecimal digit: %c", hex[i]);
                        return 0;
                }
                i++;
            }
            printf("\n");
            break;
        }
        case 6: {
            int i, hex = 0, dec = 0;
            int bin;

            printf("Enter the Binary Number: ");
            scanf("%ld", &bin);
            
            i = 0;
            while (bin != 0) {
                dec = dec + (bin % 10) * pow(2, i);
                bin = bin / 10;
                i++;
            }

            i = 1;
            while (dec != 0) {
                hex = hex + (dec % 16) * i;
                dec = dec / 16;
                i = i * 10;
            }
            printf("The hexadecimal Value: %d\n", hex);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

