#include <stdio.h>
void marere()
{
int pointer = 99;
int* pointerref = &pointer;
printf("pointer is = %d \n",pointer);
*pointerref = 299;
printf("pointer is = %d \n",pointer);


}
int main(){
    marere();
}