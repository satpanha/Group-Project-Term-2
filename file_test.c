#include <stdio.h>
int main (){

    //Write file
//    FILE *fptr; // to pointer to fptr
//    fptr =fopen("test.txt","w"); // to open the file 
//    fprintf(fptr,"This is the way that we both wanna feel!!\n");//write any text to the file
//    fprintf(fptr,"Here is the second line of the test file handling!!");
//    fclose(fptr);

	//read file
//    fptr =fopen("test.txt","r")
//    char my_string[100];
//    fgets(my_string, 100 ,fptr);
//    printf("%s",my_string); // to read any text in file test.txt but only 1 line
//    fclose(fptr);// to close the file 

	//read file with many line
//    fptr =fopen("test.txt","r");
//	char my_string[100];
//	while(fgets(my_string,100,fptr)){
//		printf("%s",my_string);//Will be print all text in test.txt file
//	}
//	fclose(fptr);

	//If you try to open a file for reading that does not exist,
//	FILE *fptr;
//	fptr=fopen("NULL.txt","r");
//	if(fptr == NULL){
//		printf("Not able to open the file.");// file doesn't exit in your folder will be print this line
//	}else{
//		printf("enable to open the file.");// if you have the file in your folder will be print this line
//	}
//	fclose(fptr);

	//if the file exist 
//	FILE *fptr;
//	char my_string[100];
//	fptr =fopen("test.txt","r");
//	if(fptr!=NULL){ // if you have file in your folder you can open the file 
// 		while(fgets(my_string,100,fptr)){// use to print all of your text
// 			printf("%s",my_string);//and print in this line with all your text in the file
//	 	}
//	}else{
//		printf("not able to open the file.");// if you don't have file in your folder will be print in this line
//	}
//	fclose(fptr);

    return 0;
}
