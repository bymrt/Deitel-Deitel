#include <stdio.h>
#include <ctype.h>
#define SIZE 10
//değer aktarımı ve referans aktarımı kullanarak değişkenin küpünü bulmak
int cubebyvalue(int n);
void cubebyReference(int *nPtr);

//Bir karakter dizinin sabit olmayan verilere sabit olmayan işaretçi kullanarak büyük harflere dönüştürmek
void convertToUppercase(char *sPtr);

//Değerleri bir dizi içerisine almak, artan sıraya göre sıralamak
void bubbleSort( int *const array, size_t size);


int main(void)
{
    int number1 = 5;
    printf("The original value of number is %d",number1);
    number1 = cubebyvalue(number1);
    printf("\nThe new value of number is %d\n",number1);
    
    int number2 = 5;
    printf("\nThe original value of number is %d",number2);
    cubebyReference( &number2 );
    printf("\nThe new value of number is %d\n",number2);
    
    char string[] = "KarAktErleR ";
    printf("\nThe string befor conversion is : %s", string);
    convertToUppercase(string);
    printf("\nThe string after conversion : %s\n",string);
    
    int a[SIZE] = {3,5,7,1,6,56,45,2,100,99};
    size_t i;
    puts("\nData items in original order");
    
    for(i = 0; i < SIZE; ++i)
    {
        printf("%4d",a[i]);
    }
    
    bubbleSort(a, SIZE);
    
        puts("\nData items in ascending order");
    
    for(i = 0; i < SIZE; ++i)
    {
        printf("%4d",a[i]);
    }
    puts("");
    
}

int cubebyvalue(int n)
{
    return n * n * n; 
}


void cubebyReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}

void convertToUppercase(char *sPtr)
{
    while(*sPtr != '\0')
    {
        *sPtr =toupper(*sPtr);
        ++sPtr;
    }
}

void bubbleSort(int *const array, size_t size)
{
    void swap(int *element1Ptr, int *element2Ptr);
    unsigned int pass;
    size_t j;
    
    for(pass = 0; pass <size-1; ++pass)
    {
        for(j = 0; j < size-1; ++j )
        {
            if(array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}